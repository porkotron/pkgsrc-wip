# $NetBSD: Makefile,v 1.5 2012/09/28 21:24:33 asau Exp $

DISTNAME=	Framer-0.0.0
PKGNAME=	deforaos-framer-0.0.0
PKGREVISION=	1
CATEGORIES=	wm
MASTER_SITES=	http://www.defora.org/os/download/download/3291/

MAINTAINER=	khorben@defora.org
HOMEPAGE=	http://www.defora.org/
COMMENT=	DeforaOS desktop window manager

LICENSE=	gnu-gpl-v3

USE_TOOLS+=	pkg-config

MAKE_FLAGS+=	PREFIX=${PREFIX}
MAKE_FLAGS+=	DESTDIR=${DESTDIR}

.include "options.mk"

.include "../../x11/gtk2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
