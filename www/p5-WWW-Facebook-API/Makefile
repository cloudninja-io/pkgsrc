# $NetBSD: Makefile,v 1.12 2013/12/09 14:17:56 obache Exp $
#

DISTNAME=	WWW-Facebook-API-0.4.18
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	5
CATEGORIES=	www perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=WWW/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/WWW-Facebook-API/
COMMENT=	Facebook API implementation

DEPENDS+=	p5-Crypt-SSLeay-[0-9]*:../../security/p5-Crypt-SSLeay
DEPENDS+=	{perl>=5.7.3,p5-Digest-MD5-[0-9]*}:../../security/p5-Digest-MD5
DEPENDS+=	p5-JSON-Any-[0-9]*:../../converters/p5-JSON-Any
DEPENDS+=	{perl>=5.7.3,p5-Time-HiRes-[0-9]*}:../../time/p5-Time-HiRes
DEPENDS+=	p5-libwww-[0-9]*:../../www/p5-libwww
DEPENDS+=	p5-version-[0-9]*:../../devel/p5-version
DEPENDS+=	p5-Readonly-[0-9]*:../../devel/p5-Readonly

PKG_INSTALLATION_TYPES=	overwrite pkgviews

PERL5_PACKLIST=		auto/WWW/Facebook/API/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
