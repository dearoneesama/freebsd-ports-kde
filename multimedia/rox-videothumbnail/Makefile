# $FreeBSD$

PORTNAME=	rox-videothumbnail
PORTVERSION=	0.1.14
PORTREVISION=	4
CATEGORIES=	multimedia
MASTER_SITES=	http://www.kerofin.demon.co.uk/rox/
DISTNAME=	VideoThumbnail-${PORTVERSION}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Video thumbnail provider for the ROX file manager

DEPRECATED=	Old, uses EOLed python27
EXPIRATION_DATE=	2020-02-16

RUN_DEPENDS=	${LOCALBASE}/bin/rox:x11-fm/rox-filer \
		${PYTHON_PKGNAMEPREFIX}roxlib>=0:devel/py-roxlib@${PY_FLAVOR}

WRKSRC=		${WRKDIR}/VideoThumbnail

USES=		python:2.7 shebangfix
SHEBANG_FILES=	AppRun vidthumb.py
NO_ARCH=	yes

do-build:
	@${PYTHON_CMD} -m compileall ${WRKSRC}
	@${PYTHON_CMD} -O -m compileall ${WRKSRC}

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/apps
	${CP} -r ${WRKSRC} ${STAGEDIR}${PREFIX}/apps/

.include <bsd.port.mk>
