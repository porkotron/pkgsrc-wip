# $NetBSD: Makefile,v 1.31 2012/10/06 14:10:55 asau Exp $

DISTNAME=	gnome-backgrounds-3.18.0
CATEGORIES=	graphics gnome
MASTER_SITES=	${MASTER_SITE_GNOME:=sources/gnome-backgrounds/3.18/}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.gnome.org/
COMMENT=	Set of background images for the GNOME Desktop
LICENSE=	gnu-gpl-v2

GNU_CONFIGURE=		YES
USE_TOOLS+=		gmake intltool msgfmt
USE_LANGUAGES=		c
USE_PKGLOCALEDIR=	YES

BUILDLINK_DEPMETHOD.gettext=	build

.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
