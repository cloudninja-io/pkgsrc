$NetBSD: patch-unix_tclUnixInit.c,v 1.3 2014/01/11 14:41:05 adam Exp $

Carried over from TCL 8.4

--- unix/tclUnixInit.c.orig	2013-09-19 19:04:17.000000000 +0000
+++ unix/tclUnixInit.c
@@ -22,7 +22,7 @@
 #    endif
 #endif
 #include <sys/resource.h>
-#if defined(__FreeBSD__) && defined(__GNUC__)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(__GNUC__)
 #   include <floatingpoint.h>
 #endif
 #if defined(__bsdi__)
@@ -31,6 +31,12 @@
 #	include <dlfcn.h>
 #   endif
 #endif
+#if defined(__NetBSD__)
+#include <sys/param.h>
+#include <sys/sysctl.h>
+#include <sys/utsname.h>
+#endif
+
 
 #ifdef __CYGWIN__
 DLLIMPORT extern __stdcall unsigned char GetVersionExA(void *);
@@ -387,7 +393,7 @@ TclpInitPlatform(void)
     (void) signal(SIGPIPE, SIG_IGN);
 #endif /* SIGPIPE */
 
-#if defined(__FreeBSD__) && defined(__GNUC__)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && defined(__GNUC__)
     /*
      * Adjust the rounding mode to be more conventional. Note that FreeBSD
      * only provides the __fpsetreg() used by the following two for the GNU
@@ -754,6 +760,11 @@ TclpSetVariables(
 #endif
     int unameOK;
     Tcl_DString ds;
+#if defined(__NetBSD__)
+    char machine_arch[SYS_NMLN];
+    int mib[2] = { CTL_HW, HW_MACHINE_ARCH };
+    size_t len = sizeof(machine_arch);
+#endif
 
 #ifdef HAVE_COREFOUNDATION
     char tclLibPath[MAXPATHLEN + 1];
@@ -922,8 +933,15 @@ TclpSetVariables(
 
 #endif /* DJGPP */
 	}
+#if defined(__NetBSD__)
+	if (sysctl(mib, sizeof(mib) / sizeof(int), machine_arch, &len, NULL, 0) < 0)
+	    unameOK = 0;
+	else
+            Tcl_SetVar2(interp, "tcl_platform", "machine", machine_arch, TCL_GLOBAL_ONLY);
+#else
 	Tcl_SetVar2(interp, "tcl_platform", "machine", name.machine,
 		TCL_GLOBAL_ONLY);
+#endif /* __NetBSD__ */
     }
 #endif /* !NO_UNAME */
     if (!unameOK) {
