# $NetBSD: Makefile,v 1.26 2014/04/10 06:21:20 obache Exp $

DISTNAME=	ark-${_KDE_VERSION}
PKGREVISION=	2
CATEGORIES=	archivers
COMMENT=	Manages various archive formats within the KDE environment

.include "../../meta-pkgs/kde4/Makefile.kde4"

CMAKE_ARGS+=	-DWITH_QJSON:BOOL=OFF

.include "../../meta-pkgs/kde4/kde4.mk"

.include "../../archivers/bzip2/buildlink3.mk"
BUILDLINK_API_DEPENDS.libarchive+=  libarchive>=2.6.0
.include "../../archivers/libarchive/buildlink3.mk"
.include "../../archivers/xz/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/kdelibs4/buildlink3.mk"
.include "../../x11/kde-baseapps4/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
