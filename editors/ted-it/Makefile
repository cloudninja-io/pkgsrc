# $NetBSD: Makefile,v 1.16 2012/10/03 11:43:44 asau Exp $

DISTNAME=	Ted_it_IT
PKGNAME=	ted-it-2.16
PKGREVISION=	1
CATEGORIES=	editors
MASTER_SITES=	ftp://ftp.nluug.nl/pub/editors/ted/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.nllgg.nl/Ted/
COMMENT=	Italian spelling dictionary for the Ted word processor

DEPENDS+=	ted>=2.6:../../editors/ted

WRKSRC=		${WRKDIR}
USE_X11BASE=	YES

DIST_SUBDIR=	Ted-2.16
NO_BUILD=	YES

INSTALLATION_DIRS=	share/Ted/ind

do-install:
	${INSTALL_DATA} ${WRKSRC}/ind/Italian.ind \
		${DESTDIR}${PREFIX}/share/Ted/ind

.include "../../mk/bsd.pkg.mk"
