# $NetBSD: Makefile,v 1.4 2012/10/07 16:23:15 asau Exp $
#

DISTNAME=	SoQt-1.4.1
PKGNAME=	${DISTNAME:tl}
CATEGORIES=	graphics
MASTER_SITES=	http://ftp.coin3d.org/coin/src/all/

MAINTAINER=	silasdb@gmail.com
HOMEPAGE=	http://www.coin3d.org/lib/soqt/
COMMENT=	Legacy library that provides glue between Coin and Qt
LICENSE=	gnu-gpl-v2

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	gmake
# XXX: gmake is necessary because of a bug in the build system of this version
# of SoQt (1.4.1) that is fixed in the newest version.

USE_LANGUAGES=	c c++

.include "../../graphics/Coin/buildlink3.mk"
.include "../../graphics/Mesa/buildlink3.mk"
.include "../../x11/qt4-libs/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
