# $FreeBSD$

PORTNAME=	cquery
PORTVERSION=	20180718
DISTVERSIONPREFIX=	v
PORTREVISION=	6
CATEGORIES=	devel

MAINTAINER=	henry.hu.sh@gmail.com
COMMENT=	Highly-scalable, low-latency language server for C/C++/Objective-C

LICENSE=	MIT

BUILD_DEPENDS=	llvm-config${LLVM_DEFAULT}:devel/llvm${LLVM_DEFAULT}
LIB_DEPENDS=	libclang.so:devel/llvm${LLVM_DEFAULT}

USES=		compiler:c++14-lang python:2.7,build waf

USE_GITHUB=	yes
GH_ACCOUNT=	cquery-project
GH_TUPLE=	miloyip:rapidjson:daabb88:rapidjson/third_party/rapidjson \
		onqtam:doctest:b40b7e7:doctest/third_party/doctest \
		greg7mdp:sparsepp:1ca7189:sparsepp/third_party/sparsepp \
		msgpack:msgpack-c:208595b:msgpack/third_party/msgpack-c \
		emilk:loguru:6bf94c:loguru/third_party/loguru \
		zeux:pugixml:24a7064:pugixml/third_party/pugixml

PLIST_FILES=	bin/cquery

CONFIGURE_ARGS=	--variant=system --llvm-config=${LOCALBASE}/bin/llvm-config${LLVM_DEFAULT}
MAKE_ARGS=	--variant=system

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/cquery

.include <bsd.port.mk>
