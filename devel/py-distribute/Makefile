# $NetBSD: Makefile,v 1.14 2014/01/25 10:30:03 wiz Exp $

DISTNAME=	distribute-0.6.49
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel
MASTER_SITES=	http://pypi.python.org/packages/source/d/distribute/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://pypi.python.org/pypi/distribute
COMMENT=	Replacement for setuptools
LICENSE=	python-software-foundation # or ZPL

CONFLICTS+=	${PYPKGPREFIX}-setuptools-[0-9]*
PLIST_SUBST+=	PYVERSSUFFIX=${PYVERSSUFFIX}

REPLACE_PYTHON=		setuptools/command/easy_install.py
REPLACE_PYTHON+=	setuptools/tests/test_resources.py

.include "../../lang/python/application.mk"
.include "../../lang/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
