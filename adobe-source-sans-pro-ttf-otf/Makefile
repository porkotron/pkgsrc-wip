# $NetBSD: Makefile,v 1.3 2013/04/08 02:20:18 othyro Exp $

FNTVER=		1.036
DISTNAME=	SourceSansPro_FontsOnly-${FNTVER}
PKGNAME=	adobe-source-sans-pro-ttf-otf-${FNTVER}
CATEGORIES=	fonts
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=sourcesans.adobe/}
EXTRACT_SUFX=	.zip

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://sourceforge.net/projects/sourcesans.adobe/
COMMENT=	Adobe Source Sans Pro TTF fonts
LICENSE=	ofl-v1.1

WRKSRC=			${WRKDIR}/${DISTNAME}
NO_BUILD=		yes
NO_CONFIGURE=		yes

FONTDIR=		${PREFIX}/lib/X11/fonts/TTF
FONTS_DIRS.ttf+=	${FONTDIR}
INSTALLATION_DIRS+=	${FONTDIR}

do-install:
	cd ${WRKSRC} && for ff in *.otf *.ttf ; do \
		${INSTALL_DATA} $$ff ${DESTDIR}${FONTDIR}/$$ff ;\
	done

.include "../../mk/bsd.pkg.mk"
