# $NetBSD$

GITHUB_PROJECT=	libevhtp
DISTNAME=	1.2.10
PKGNAME=	${GITHUB_PROJECT}-${DISTNAME}
CATEGORIES=	wip
MASTER_SITES=	${MASTER_SITE_GITHUB:=ellzey/}
DIST_SUBDIR=	${GITHUB_PROJECT}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	${MASTER_SITE_GITHUB:=ellzey/libevhtp/}
COMMENT=	Flexible replacement for libevent's httpd API
LICENSE=	modified-bsd

WRKSRC=		${WRKDIR}/libevhtp-1.2.10
USE_CMAKE=	yes
USE_TOOLS+=	pkg-config
USE_TOOLS+=	gmake
USE_LANGUAGES+=  c99 c++

CMAKE_ARGS+=	-DEVHTP_BUILD_SHARED=ON
CFLAGS.SunOS+=	-D__EXTENSIONS__ -DNO_SYS_UN

PKGCONFIG_OVERRIDE+=	evhtp.pc.in

INSTALL_ENV+=           INSTALL_ROOT=${DESTDIR}

.include "../../security/openssl/buildlink3.mk"
.include "../../devel/libevent/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
