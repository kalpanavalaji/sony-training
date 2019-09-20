Summary: Network management tools
Name: netutils
Version: 1.0.0
Release: 1%{?dist}
Group: Applications/File
License: GPLv2+
Url: http://mama.indstate.edu/users/ice/netutils/
Source: ftp://mama.indstate.edu/linux/tree/netutils-%{version}.xz
BuildRequires: curl
BuildRequires: bash
BuildRequires: gcc
BuildRequires: jq

BuildRoot: %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)

%description
	Network management tools ,Includes various tools for network management.

%prep
%setup -q
# Fixed spelling mistake in man page.

%build
./configure CFLAGS="$RPM_OPT_FLAGS" "CPPFLAGS=$(getconf LFS_CFLAGS)" %{?_smp_mflags}

%install
rm -rf $RPM_BUILD_ROOT
mkdir -p $RPM_BUILD_ROOT%{_bindir}

make	BINDIR=$RPM_BUILD_ROOT%{_bindir} \
	MANDIR=$RPM_BUILD_ROOT%{_mandir}/man1 \
	install

chmod -x $RPM_BUILD_ROOT%{_mandir}/man1/netutils.1

%clean
#rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
%{_bindir}/netutils
%{_mandir}/man1/netutils.1*
%doc README LICENSE

%changelog
* Thu Apr 3 2008 Christian Schaller <christian.schaller at collabora co uk>
- Update spec file to make inclusion of all docs explicit


 

