# $NetBSD: Makefile,v 1.63 2014/04/09 07:27:06 obache Exp $
#

DISTNAME=		monotone-viz-1.0.1-nolablgtk
PKGNAME=		${DISTNAME:S/-nolablgtk//}
PKGREVISION=		41
CATEGORIES=		devel scm
MASTER_SITES=		http://oandrieu.nerim.net/monotone-viz/

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://oandrieu.nerim.net/monotone-viz/
COMMENT=		Visualize monotone ancestry graphs

BUILD_TARGET=		monotone-viz
GNU_CONFIGURE=		yes
USE_TOOLS+=		gmake pkg-config

AUTO_MKDIRS=		yes
EGDIR=			${PREFIX}/share/examples/${PKGBASE}
WRKSRC=			${WRKDIR}/${PKGNAME_NOREV}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/monotone-viz ${DESTDIR}${PREFIX}/bin
	${INSTALL_DATA_DIR} ${DESTDIR}${EGDIR}
	${INSTALL_DATA} ${WRKSRC}/monotone-viz.style.sample ${DESTDIR}${EGDIR}

.include "../../graphics/graphviz/buildlink3.mk"
.include "../../graphics/libgnomecanvas/buildlink3.mk"
.include "../../lang/ocaml/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../x11/lablgtk/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
