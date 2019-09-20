#
# This file is auto-generated. DO NOT EDIT
# Generated by: autospec.py
#
# Source0 file verified with key 0x5D2EEE6F6F349D7C (tim@centricular.com)
#
Name     : gstreamer-vaapi
Version  : 1.14.4
Release  : 30
URL      : https://gstreamer.freedesktop.org/src/gstreamer-vaapi/gstreamer-vaapi-1.14.4.tar.xz
Source0  : https://gstreamer.freedesktop.org/src/gstreamer-vaapi/gstreamer-vaapi-1.14.4.tar.xz
#Source99 : https://gstreamer.freedesktop.org/src/gstreamer-vaapi/gstreamer-vaapi-1.16.0.tar.xz.asc
Summary  : GStreamer Multimedia Framework VAAPI Plugin
Group    : Development/Tools
License  : LGPL-2.1
Requires: gstreamer-vaapi-lib = %{version}-%{release}
Requires: gstreamer-vaapi-license = %{version}-%{release}
BuildRequires : buildreq-meson
BuildRequires : docbook-xml
BuildRequires : gobject-introspection
BuildRequires : gobject-introspection-dev
BuildRequires : gst-plugins-bad-dev
BuildRequires : gst-plugins-base-dev
BuildRequires : gstreamer-dev
BuildRequires : gtk-doc
BuildRequires : gtk-doc-dev
BuildRequires : libxslt-bin
BuildRequires : pkgconfig(egl)
BuildRequires : pkgconfig(gl)
BuildRequires : pkgconfig(glesv2)
BuildRequires : pkgconfig(gtk+-3.0)
BuildRequires : pkgconfig(libdrm)
BuildRequires : pkgconfig(libudev)
BuildRequires : pkgconfig(libva)
BuildRequires : pkgconfig(libva-drm)
BuildRequires : pkgconfig(libva-wayland)
BuildRequires : pkgconfig(libva-x11)
BuildRequires : pkgconfig(wayland-client)
BuildRequires : pkgconfig(x11)
BuildRequires : pkgconfig(xrandr)
BuildRequires : pkgconfig(xrender)

%description
gstreamer-vaapi
VA-API support to GStreamer
License
-------
gstreamer-vaapi helper libraries and plugin elements are available
under the terms of the GNU Lesser General Public License v2.1+

%package doc
Summary: doc components for the gstreamer-vaapi package.
Group: Documentation

%description doc
doc components for the gstreamer-vaapi package.


%package lib
Summary: lib components for the gstreamer-vaapi package.
Group: Libraries
Requires: gstreamer-vaapi-license = %{version}-%{release}

%description lib
lib components for the gstreamer-vaapi package.


%package license
Summary: license components for the gstreamer-vaapi package.
Group: Default

%description license
license components for the gstreamer-vaapi package.


%prep
%setup -q -n gstreamer-vaapi-1.14.4

%build
export http_proxy=http://127.0.0.1:9/
export https_proxy=http://127.0.0.1:9/
export no_proxy=localhost,127.0.0.1,0.0.0.0
export LANG=C
export SOURCE_DATE_EPOCH=1557094456
export AR=gcc-ar
export RANLIB=gcc-ranlib
export NM=gcc-nm
export CFLAGS="$CFLAGS -O3 -ffat-lto-objects -flto=4 "
export FCFLAGS="$CFLAGS -O3 -ffat-lto-objects -flto=4 "
export FFLAGS="$CFLAGS -O3 -ffat-lto-objects -flto=4 "
export CXXFLAGS="$CXXFLAGS -O3 -ffat-lto-objects -flto=4 "
%configure --disable-static
make  %{?_smp_mflags}

%check
export LANG=C
export http_proxy=http://127.0.0.1:9/
export https_proxy=http://127.0.0.1:9/
export no_proxy=localhost,127.0.0.1,0.0.0.0
make VERBOSE=1 V=1 %{?_smp_mflags} check

%install
export SOURCE_DATE_EPOCH=1557094456
rm -rf %{buildroot}
mkdir -p %{buildroot}/usr/share/package-licenses/gstreamer-vaapi
cp COPYING.LIB %{buildroot}/usr/share/package-licenses/gstreamer-vaapi/COPYING.LIB
%make_install

%files
%defattr(-,root,root,-)

%files doc
%defattr(0644,root,root,0755)
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/api-index-full.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/ch01.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/ch02.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/ch03.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-1.0.devhelp2
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-plugin-vaapi.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapidecodebin.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapih263dec.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapih264dec.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapih264enc.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapih265dec.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapih265enc.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapijpegdec.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapijpegenc.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapimpeg2dec.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapimpeg2enc.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapimpeg4dec.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapipostproc.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapisink.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapivc1dec.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapivp8dec.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapivp8enc.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapivp9dec.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-plugins-vaapivp9enc.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/gstreamer-vaapi-running.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/home.png
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/index.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/left-insensitive.png
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/left.png
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/object-tree.html
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/right-insensitive.png
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/right.png
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/style.css
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/up-insensitive.png
/usr/share/gtk-doc/html/gstreamer-vaapi-plugins-1.0/up.png

%files lib
%defattr(-,root,root,-)
/usr/lib64/gstreamer-1.0/libgstvaapi.so

%files license
%defattr(0644,root,root,0755)
/usr/share/package-licenses/gstreamer-vaapi/COPYING.LIB
