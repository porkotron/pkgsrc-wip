# $NetBSD: Makefile,v 1.25 2016/01/10 20:01:05 markd Exp $

DISTNAME=	kbookmarks-${KF5VER}
CATEGORIES=	misc

HOMEPAGE=	https://projects.kde.org/projects/frameworks/kbookmarks
COMMENT=	Support for bookmarks and the XBEL format
LICENSE=	gnu-lgpl-v2.1

.include "../../wip/kf5/Makefile.common"

.include "../../wip/kxmlgui/buildlink3.mk"
.include "../../x11/qt5-qtbase/buildlink3.mk"
BUILDLINK_DEPMETHOD.qt5-qttools= build
.include "../../x11/qt5-qttools/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
