# $NetBSD: Makefile,v 1.28 2014/04/13 10:21:41 wen Exp $

DISTNAME=		Crypt-Rijndael-1.12
PKGNAME=		p5-${DISTNAME}
SVR4_PKGNAME=		p5crj
CATEGORIES=		security perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Crypt/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/Crypt-Rijndael/
COMMENT=		Crypt::CBC compliant Rijndael encryption module
LICENSE=		gnu-lgpl-v3

DEPENDS+=		p5-Test-Manifest>=1.14:../../devel/p5-Test-Manifest

USE_LANGUAGES=		c
PERL5_PACKLIST=		auto/Crypt/Rijndael/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
