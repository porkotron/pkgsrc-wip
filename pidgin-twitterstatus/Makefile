# $NetBSD: Makefile,v 1.5 2014/02/11 21:04:10 noud4 Exp $
#

DISTNAME=		twitter-0.4.0
PKGNAME=		pidgin-${DISTNAME:S|-|status-|}
CATEGORIES=		chat net
MASTER_SITES=		http://pidgin-twitterstatus.googlecode.com/files/
EXTRACT_SUFX=		.pl

MAINTAINER=		noud4@users.sourceforge.net
HOMEPAGE=		http://code.google.com/p/pidgin-twitterstatus/
COMMENT=		Use your Twitter account as your Pidgin status message
LICENSE=		gnu-gpl-v3

DEPENDS+=		p5-XML-XPath-[0-9]*:../../textproc/p5-XML-XPath

WRKSRC=			${WRKDIR}
NO_BUILD=		yes

PLIST_SUBST+=		DISTNAME=${DISTNAME}
PLIST_SUBST+=		EXTRACT_SUFX=${EXTRACT_SUFX}

INSTALLATION_DIRS+=	lib/purple-2

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTNAME}${EXTRACT_SUFX} ${DESTDIR}${PREFIX}/lib/purple-2

.include "../../chat/pidgin/buildlink3.mk"
.include "../../chat/libpurple/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
