# $NetBSD: Makefile,v 1.9 2014/04/24 19:39:05 adam Exp $

DISTNAME=	openjpeg-2.0.1
CATEGORIES=	graphics
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=openjpeg.mirror/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.openjpeg.org/
COMMENT=	JPEG 2000 library
LICENSE=	2-clause-bsd

USE_CMAKE=	yes
CMAKE_ARGS+=	-DOPENJPEG_INSTALL_MAN_DIR=${PKGMANDIR}

CFLAGS+=	-DHAVE_POSIX_MEMALIGN

.include "../../devel/zlib/buildlink3.mk"
.include "../../graphics/lcms2/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../graphics/tiff/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
