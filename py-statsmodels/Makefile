# $NetBSD: Makefile,v 1.1 2014/07/26 11:16:19 jihbed Exp $

DISTNAME=	statsmodels-0.5.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	math
MASTER_SITES=	https://pypi.python.org/packages/source/s/statsmodels/

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	http://statsmodels.sourceforge.net/
COMMENT=	Statistical computations and models for use with SciPy
LICENSE=	modified-bsd


DEPENDS+=	${PYPKGPREFIX}-pandas>=0.14.1:../../math/py-pandas
DEPENDS+=	${PYPKGPREFIX}-scipy>=0.12.0:../../math/py-scipy
DEPENDS+=	${PYPKGPREFIX}-patsy>=0.3.0:../../wip/py-patsy

WRKSRC=	${WRKDIR}/statsmodels-0.5.0

.include "../../devel/py-cython/buildlink3.mk"
.include "../../lang/python/egg.mk"
.include "../../math/py-numpy/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
