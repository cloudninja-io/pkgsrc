# $NetBSD: Makefile,v 1.5 2014/01/19 20:37:43 wiz Exp $

PKGNAME=	${PYPKGPREFIX}-${DISTNAME:tl}
DISTNAME=	Quixote-2.7
CATEGORIES=	devel www
MASTER_SITES=	http://quixote.ca/releases/

MAINTAINER=	manu@NetBSD.org
HOMEPAGE=	http://quixote.ca/
COMMENT=	Framework for writing Python web application
LICENSE=	mit

REPLACE_PYTHON+= setup.py quixote/server/*.py quixote/test/*.py quixote/ptl/*.py
REPLACE_PYTHON+= quixote/demo/*.py

PYTHON_VERSIONS_INCOMPATIBLE=	33 # not yet ported as of 2.7

.include "../../lang/python/distutils.mk"
.include "../../lang/python/application.mk"
.include "../../mk/bsd.pkg.mk"
