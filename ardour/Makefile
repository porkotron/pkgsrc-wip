# $NetBSD$

DISTNAME=	ardour-4.4
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_GITHUB:=Ardour/}
GITHUB_TAG=	${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://ardour.org/
COMMENT=	Digital Audio Workstation
LICENSE=	gnu-gpl-v2

EXTRACT_USING=	bsdtar
USE_TOOLS+=	bsdtar pkg-config perl bash
USE_LANGUAGES=	c c++

REPLACE_PYTHON+=	export/wscript
REPLACE_PYTHON+=	libs/pbd/pbd/signals.py
REPLACE_PYTHON+=	mcp/wscript
REPLACE_PYTHON+=	midi_maps/wscript
REPLACE_PYTHON+=	patchfiles/wscript
REPLACE_PYTHON+=	templates/wscript
REPLACE_PYTHON+=	tools/bug_tool/ardour_bugs
REPLACE_PYTHON+=	tools/cstyle.py
REPLACE_PYTHON+=	tools/session_exchange.py

REPLACE_PYTHON+=	cfgtool/wscript
REPLACE_PYTHON+=	gtk2_ardour/wscript
REPLACE_PYTHON+=	headless/wscript
REPLACE_PYTHON+=	libs/appleutility/wscript
REPLACE_PYTHON+=	libs/ardour/wscript
REPLACE_PYTHON+=	libs/ardouralsautil/wscript
REPLACE_PYTHON+=	libs/audiographer/wscript
REPLACE_PYTHON+=	libs/backends/alsa/wscript
REPLACE_PYTHON+=	libs/backends/asio/wscript
REPLACE_PYTHON+=	libs/backends/coreaudio/wscript
REPLACE_PYTHON+=	libs/backends/dummy/wscript
REPLACE_PYTHON+=	libs/backends/jack/wscript
REPLACE_PYTHON+=	libs/backends/portaudio/wscript
REPLACE_PYTHON+=	libs/backends/wavesaudio/wscript
REPLACE_PYTHON+=	libs/backends/wscript
REPLACE_PYTHON+=	libs/canvas/wscript
REPLACE_PYTHON+=	libs/clearlooks-newer/wscript
REPLACE_PYTHON+=	libs/evoral/wscript
REPLACE_PYTHON+=	libs/fst/wscript
REPLACE_PYTHON+=	libs/gtkmm2ext/wscript
REPLACE_PYTHON+=	libs/libltc/wscript
REPLACE_PYTHON+=	libs/midi++2/wscript
REPLACE_PYTHON+=	libs/panners/1in2out/wscript
REPLACE_PYTHON+=	libs/panners/2in2out/wscript
REPLACE_PYTHON+=	libs/panners/stereobalance/wscript
REPLACE_PYTHON+=	libs/panners/vbap/wscript
REPLACE_PYTHON+=	libs/panners/wscript
REPLACE_PYTHON+=	libs/pbd/wscript
REPLACE_PYTHON+=	libs/plugins/reasonablesynth.lv2/wscript
REPLACE_PYTHON+=	libs/ptformat/wscript
REPLACE_PYTHON+=	libs/qm-dsp/wscript
REPLACE_PYTHON+=	libs/surfaces/control_protocol/wscript
REPLACE_PYTHON+=	libs/surfaces/frontier/wscript
REPLACE_PYTHON+=	libs/surfaces/generic_midi/wscript
REPLACE_PYTHON+=	libs/surfaces/mackie/wscript
REPLACE_PYTHON+=	libs/surfaces/osc/wscript
REPLACE_PYTHON+=	libs/surfaces/tranzport/wscript
REPLACE_PYTHON+=	libs/surfaces/wiimote/wscript
REPLACE_PYTHON+=	libs/surfaces/wscript
REPLACE_PYTHON+=	libs/timecode/wscript
REPLACE_PYTHON+=	libs/vamp-plugins/wscript
REPLACE_PYTHON+=	libs/vfork/wscript
REPLACE_PYTHON+=	tools/autowaf.py
REPLACE_PYTHON+=	tools/gccabicheck/wscript
REPLACE_PYTHON+=	tools/sanity_check/wscript
REPLACE_PYTHON+=	wscript

REPLACE_PERL+=		tools/fmt-bindings
REPLACE_PERL+=		tools/resample_session.pl
REPLACE_PERL+=		tools/synthesize_sources.pl

REPLACE_BASH+=	gtk2_ardour/icons/export_icons.sh
REPLACE_BASH+=	libs/ardour/run-profiling.sh
REPLACE_BASH+=	libs/ardour/run-session-tests.sh
REPLACE_BASH+=	libs/ardour/run-tests.sh
REPLACE_BASH+=	libs/canvas/build-and-run-benchmark.sh
REPLACE_BASH+=	libs/canvas/build-and-run-manual-test.sh
REPLACE_BASH+=	libs/canvas/build-and-run-tests.sh
REPLACE_BASH+=	libs/canvas/run-manual-test.sh
REPLACE_BASH+=	libs/canvas/run-tests.sh
REPLACE_BASH+=	libs/pbd/run-tests.sh
REPLACE_BASH+=	tools/linux_packaging/build
REPLACE_BASH+=	tools/linux_packaging/package
REPLACE_BASH+=	tools/osx_packaging/osx_build
REPLACE_BASH+=	tools/windows_packaging/clean.sh
REPLACE_BASH+=	tools/windows_packaging/configure-debug.sh
REPLACE_BASH+=	tools/windows_packaging/configure-distcc-debug.sh
REPLACE_BASH+=	tools/windows_packaging/configure-distcc-release.sh
REPLACE_BASH+=	tools/windows_packaging/configure-release.sh
REPLACE_BASH+=	tools/windows_packaging/copydll-fedora.sh
REPLACE_BASH+=	tools/windows_packaging/copydll-waves.sh
REPLACE_BASH+=	tools/windows_packaging/cptovmshare.sh
REPLACE_BASH+=	tools/windows_packaging/make-installer.sh
REPLACE_BASH+=	tools/windows_packaging/mingw-env.sh
REPLACE_BASH+=	tools/windows_packaging/package-f19.sh
REPLACE_BASH+=	tools/windows_packaging/package-f20.sh
REPLACE_BASH+=	tools/windows_packaging/package.sh
REPLACE_BASH+=	tools/windows_packaging/package_win32.sh
REPLACE_BASH+=	tools/windows_packaging/waf.sh
REPLACE_BASH+=	tools/windows_packaging/win32-env.sh
REPLACE_BASH+=	tools/windows_packaging/wine-ardour-tests.sh
REPLACE_BASH+=	tools/windows_packaging/wine-ardour.sh
REPLACE_BASH+=	tools/windows_packaging/wine-env.sh
REPLACE_BASH+=	tools/windows_packaging/wine-evoral-tests.sh
REPLACE_BASH+=	tools/windows_packaging/wine-pbd-tests.sh
REPLACE_BASH+=	tools/x-win/compile.sh
REPLACE_BASH+=	tools/x-win/package.sh

PKGCONFIG_OVERRIDE+=	libs/gtkmm2ext/libgtkmm2ext.pc.in
PKGCONFIG_OVERRIDE+=	libs/midi++2/libmidi++.pc.in
PKGCONFIG_OVERRIDE+=	libs/pbd/libpbd.pc.in

# As of NetBSD-7.99.21 pkgsrc's checks cannot open file with rare unicode characters
CHECK_PORTABILITY_SKIP+=	libs/pbd/test/i18n_test/*.tst

PYTHON_VERSIONS_INCOMPATIBLE=	33 34 35 35 # as of 4.4

.include "../../mk/bsd.prefs.mk"

.if ${OPSYS} != "Linux"
BUILDLINK_TRANSFORM+=   rm:-ldl
.endif

post-extract:
	${SED} -e 's!REVISION!${PKGVERSION_NOREV}!' \
		${FILESDIR}/revision.cc > ${WRKSRC}/libs/ardour/revision.cc

#./waf configure --strict --prefix=/usr --configdir=/etc --libjack=weak --ptformat --with-backends=jack,alsa,dummy
do-configure:
	${RUN} cd ${WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${PYTHONBIN} ./waf configure \
			--prefix=${PREFIX} \
			--configdir=${PKG_SYSCONFDIR} \
			--destdir=${DESTDIR} \
			--mandir=${PKGMANDIR} \
			--with-backends=dummy \
			--cxx11

# ./waf
# ./waf i18n
do-build:
	${RUN} cd ${WRKSRC} && \
		${SETENV} ${MAKE_ENV} ${PYTHONBIN} ./waf build

do-install:
	${RUN} cd ${WRKSRC} && \
		${SETENV} ${INSTALL_ENV} ${PYTHONBIN} ./waf install

.include "../../x11/gtkmm/buildlink3.mk"
.include "../../audio/lilv/buildlink3.mk"
.include "../../converters/sratom/buildlink3.mk"
.include "../../textproc/sord/buildlink3.mk"
.include "../../textproc/serd/buildlink3.mk"
.include "../../audio/lv2/buildlink3.mk"
.include "../../textproc/liblrdf/buildlink3.mk"
.include "../../devel/cppunit/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../audio/aubio/buildlink3.mk"
.include "../../math/fftwf/buildlink3.mk"
.include "../../audio/rubberband/buildlink3.mk"
.include "../../audio/vamp-plugin-sdk/buildlink3.mk"
.include "../../audio/taglib/buildlink3.mk"
.include "../../wip/liblo/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../audio/libsndfile/buildlink3.mk"
.include "../../devel/glibmm/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../devel/boost-libs/buildlink3.mk"
.include "../../mk/dlopen.buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../mk/bsd.pkg.mk"
