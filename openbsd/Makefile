COMMENT=	Command line client for Spotify

VERSION=	1.520
DISTNAME=	despotify-${VERSION}
PKGNAME=	${DISTNAME}

CATEGORIES=	audio

HOMEPAGE=	http://despotify.se/	

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=	http://qbit.devio.us/

BUILD_DEPENDS=	devel/gmake \
				audio/mpg123 \
				audio/libao \
				audio/libogg \
				audio/libvorbis \
				devel/libtool \

USE_GMAKE=	Yes
USE_LIBTOOL=	Yes

WANTLIB += c crypto pthread m ncursesw z
SHARED_LIBS +=	despotify                 0.0 # 0.0

SUBST_VARS+=	CFLAGS

MAKE_ENV+=	CXX=c++ CCFLAGS+="${CFLAGS}" CXXFLAGS="${CXXFLAGS}"

NO_CCACHE=	Yes

.include <bsd.port.mk>
