# $NetBSD: Makefile,v 1.1 2014/08/08 11:55:56 chybz Exp $

DISTNAME=	nanomsgxx-0.1
CATEGORIES=	devel
GITHUB_TAG=	ab79438ddbf9033b93a2f53db068c03735cd45d7
MASTER_SITES=	${MASTER_SITE_GITHUB:=achille-roussel/}
EXTRACT_SUFX=	.zip

MAINTAINER=	rchibois@gmail.com
HOMEPAGE=	https://github.com/achille-roussel/nanomsgxx/
COMMENT=	Nanomsg binding for C++11
LICENSE=	mit

DEPENDS+=	nanomsg>=0:../../wip/nanomsg
USE_LANGUAGES=	c c++

.include "../../mk/bsd.prefs.mk"
.include "../../lang/python/pyversion.mk"

PYTHON_FOR_BUILD_ONLY=	yes
REPLACE_PYTHON+=	waf wscript
MAKE_ENV+=		PYTHON=${PYTHONBIN}
BUILD_DEPENDS+=		py${PYTHON_VERSION_DEFAULT}-expat-[0-9]*:../../textproc/py-expat

do-configure:
	cd ${WRKSRC} && env ${MAKE_ENV} ./waf configure

do-build:
	cd ${WRKSRC} && env ${MAKE_ENV} ./waf build

do-install:
	cd ${WRKSRC} && env DESTDIR=${DESTDIR} ${MAKE_ENV} ./waf install

.include "../../lang/python/application.mk"
.include "../../wip/nanomsg/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
