# $NetBSD: Makefile,v 1.10 2014/05/09 07:38:49 thomasklausner Exp $

DISTNAME=	pyse-0.3.1
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/^py//}
PKGREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=pyfdm/}

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	http://pyfdm.sourceforge.net/
COMMENT=	Framework for solving PDEs with FDM using Python
LICENSE=	gnu-gpl-v3

PYTHON_VERSIONED_DEPENDENCIES=	Pmw
PYTHON_VERSIONS_INCOMPATIBLE=	33 34 35 # py-Numeric, py-numarray

USE_LANGUAGES=	c c++

PYDISTUTILSPKG=	yes

.include "../../lang/python/extension.mk"
.include "../../lang/python/versioned_dependencies.mk"
.include "../../math/py-Numeric/buildlink3.mk"
.include "../../math/py-numarray/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
