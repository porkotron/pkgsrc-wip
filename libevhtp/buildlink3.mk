# $NetBSD$

BUILDLINK_TREE+=	libevhtp

.if !defined(LIBEVHTP_BUILDLINK3_MK)
LIBEVHTP_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.libevhtp+=	libevhtp>=1.2.10
BUILDLINK_PKGSRCDIR.libevhtp?=	../../wip/libevhtp

.include "../../devel/libevent/buildlink3.mk"
.endif	# LIBEVHTP_BUILDLINK3_MK

BUILDLINK_TREE+=	-libevhtp
