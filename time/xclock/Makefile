# $NetBSD: Makefile,v 1.6 2013/09/08 08:24:53 wiz Exp $

DISTNAME=	xclock-1.0.7
CATEGORIES=	time x11
MASTER_SITES=	${MASTER_SITE_XORG:=app/}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	joerg@NetBSD.org
HOMEPAGE=	http://xorg.freedesktop.org/
COMMENT=	Analog / digital clock for X

PREV_PKGPATH=	x11/xclock

GNU_CONFIGURE=	yes
USE_TOOLS+=	pkg-config

CONFIGURE_ENV+=	APP_MAN_SUFFIX=1
LDFLAGS+=	${BUILDLINK_LDADD.iconv}

MAKE_FLAGS+=		appdefaultdir=${PREFIX}/lib/X11/app-defaults

.include "../../converters/libiconv/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXaw/buildlink3.mk"
.include "../../x11/libXft/buildlink3.mk"
.include "../../x11/libXrender/buildlink3.mk"
.include "../../x11/libxkbfile/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
