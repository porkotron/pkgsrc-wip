# $NetBSD: Makefile,v 1.7 2012/10/03 09:10:45 asau Exp $

DISTNAME=	lxde-icon-theme-0.5.1
CATEGORIES=	x11
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=lxde/}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	youri@NetBSD.org
HOMEPAGE=	http://lxde.org/
COMMENT=	LXDE icon theme
LICENSE=	gnu-gpl-v2

NO_BUILD=	yes
USE_TOOLS+=	pax
AUTO_MKDIRS=	yes

do-install:
	${RUN} cd ${WRKSRC} && \
	    pax -rw nuoveXT2 ${DESTDIR}${PREFIX}/share/icons

.include "../../mk/bsd.pkg.mk"
