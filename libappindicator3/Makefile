# $NetBSD: Makefile,v 1.2 2015/04/10 19:06:32 krytarowski Exp $

USE_GTK_VERSION=3

.include "../../wip/libappindicator/Makefile.common"

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	GTK+3 Allow applications to export a menu into the panel
PKGNAME=	${DISTNAME:S/-/3-/}

.include "../../wip/libindicator3/buildlink3.mk"
.include "../../wip/libdbusmenu-gtk3/buildlink3.mk"
.include "../../devel/py-gobject3/buildlink3.mk"
.include "../../sysutils/dbus-glib/buildlink3.mk"
.include "../../x11/gtk3/buildlink3.mk"
#.include "../../x11/py-gtk3/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
