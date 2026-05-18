Полная работа в терминале:

```
reyne@reyne-VirtualBox:~/workspace/reports/lab05$ open https://cmake.org/Wiki/CMake:CPackPackageGenerators
reyne@reyne-VirtualBox:~/workspace/reports/lab05$ update.go:85: cannot change mount namespace according to change mount (/var/lib/snapd/hostfs/usr/local/share/doc /usr/local/share/doc none bind,ro 0 0): cannot write to "/var/lib/snapd/hostfs/usr/local/share/doc" because it would affect the host in "/var/lib/snapd"
update.go:85: cannot change mount namespace according to change mount (/var/lib/snapd/hostfs/usr/share/gimp/2.0/help /usr/share/gimp/2.0/help none bind,ro 0 0): cannot write to "/var/lib/snapd/hostfs/usr/share/gimp/2.0/help" because it would affect the host in "/var/lib/snapd"
update.go:85: cannot change mount namespace according to change mount (/var/lib/snapd/hostfs/usr/share/gtk-doc /usr/share/gtk-doc none bind,ro 0 0): cannot write to "/var/lib/snapd/hostfs/usr/share/gtk-doc" because it would affect the host in "/var/lib/snapd"
update.go:85: cannot change mount namespace according to change mount (/var/lib/snapd/hostfs/usr/share/xubuntu-docs /usr/share/xubuntu-docs none bind,ro 0 0): cannot write to "/var/lib/snapd/hostfs/usr/share/xubuntu-docs" because it would affect the host in "/var/lib/snapd"
Gtk-Message: 14:03:56.125: Not loading module "atk-bridge": The functionality is provided by GTK natively. Please try to not load it.

reyne@reyne-VirtualBox:~/workspace/reports/lab05$ export GITHUB_USERNAME=ChayokSMedom
reyne@reyne-VirtualBox:~/workspace/reports/lab05$ export GITHUB_EMAIL=medvedevachm@gmail.com
reyne@reyne-VirtualBox:~/workspace/reports/lab05$ alias adit=nano
reyne@reyne-VirtualBox:~/workspace/reports/lab05$ alias gsed=sed
reyne@reyne-VirtualBox:~/workspace/reports/lab05$ cd ${GITHUB_USERNAME}/workspace
bash: cd: ChayokSMedom/workspace: No such file or directory
reyne@reyne-VirtualBox:~/workspace/reports/lab05$ cd ~/${GITHUB_USERNAME}/workspace
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$ pushd .
~/ChayokSMedom/workspace ~/ChayokSMedom/workspace
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$ source scripts/activate
bash: scripts/activate: No such file or directory
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$ git clone https://github.com/${GITHUB_USERNAME}/lab05 projects/lab06
Cloning into 'projects/lab06'...
remote: Enumerating objects: 20, done.
remote: Counting objects: 100% (20/20), done.
remote: Compressing objects: 100% (13/13), done.
remote: Total 20 (delta 5), reused 16 (delta 4), pack-reused 0 (from 0)
Receiving objects: 100% (20/20), 8.15 KiB | 2.71 MiB/s, done.
Resolving deltas: 100% (5/5), done.
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$ cd projects/lab06
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git remote remove origin
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab06
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ gsed -i '/project(print)/a\
set(PRINT_VERSION_STRING "v\${PRINT_VERSION}")
' CMakeLists.txt
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ gsed -i '/project(print)/a\
set(PRINT_VERSION\
  \${PRINT_VERSION_MAJOR}.\${PRINT_VERSION_MINOR}.\${PRINT_VERSION_PATCH}.\${PRINT_VERSION_TWEAK})
' CMakeLists.txt
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ gsed -i '/project(print)/a\
set(PRINT_VERSION_TWEAK 0)
' CMakeLists.txt
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ gsed -i '/project(print)/a\
set(PRINT_VERSION_PATCH 0)
' CMakeLists.txt
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ gsed -i '/project(print)/a\
set(PRINT_VERSION_MINOR 1)
' CMakeLists.txt
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ gsed -i '/project(print)/a\
set(PRINT_VERSION_MAJOR 0)
' CMakeLists.txt
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git diff
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ touch DESCRIPTION && edit DESCRIPTION
Command 'edit' not found, but can be installed with:
sudo apt install mailcap
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ sudo apt install mailcap
[sudo: authenticate] Password:             
The following packages were automatically installed and are no longer required:
  linux-headers-7.0.0-14                   linux-modules-7.0.0-14-generic
  linux-headers-7.0.0-14-generic           linux-tools-7.0.0-14
  linux-image-unsigned-7.0.0-14-generic    linux-tools-7.0.0-14-generic
  linux-main-modules-zfs-7.0.0-14-generic
Use 'sudo apt autoremove' to remove them.

Installing:
  mailcap

Summary:
  Upgrading: 0, Installing: 1, Removing: 0, Not Upgrading: 2
  Download size: 24.7 kB
  Space needed: 92.2 kB / 9,859 MB available

Get:1 http://archive.ubuntu.com/ubuntu resolute/main amd64 mailcap all 3.75ubuntu1 [24.7 kB]
Fetched 24.7 kB in 0s (52.7 kB/s)
Selecting previously unselected package mailcap.
(Reading database… 226126 files and directories currently installed.)
Preparing to unpack …/mailcap_3.75ubuntu1_all.deb…
Unpacking mailcap (3.75ubuntu1)…
Setting up mailcap (3.75ubuntu1)…
Processing triggers for man-db (2.13.1-1build1)…
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ touch DESCRIPTION && edit DESCRIPTION
Error: no "edit" mailcap rules found for type "inode/x-empty"
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ alias edit=nano
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ echo "Print library - static C++ library for printing" > DESCRIPTION
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ touch DESCRIPTION && edit DESCRIPTION
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ touch ChangeLog.md
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ export DATE="`LANG=en_US date +'%a %b %d %Y'`"
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cat > ChangeLog.md <<EOF
* ${DATE} ${GITHUB_USERNAME} <${GITHUB_EMAIL}> 0.1.0.0
- Initial RPM release
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cat > CPackConfig.cmake <<EOF
include(InstallRequiredSystemLibraries)
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cat >> CPackConfig.cmake <<EOF
set(CPACK_PACKAGE_CONTACT ${GITHUB_EMAIL})
set(CPACK_PACKAGE_VERSION_MAJOR \${PRINT_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR \${PRINT_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH \${PRINT_VERSION_PATCH})
set(CPACK_PACKAGE_VERSION_TWEAK \${PRINT_VERSION_TWEAK})
set(CPACK_PACKAGE_VERSION \${PRINT_VERSION})
set(CPACK_PACKAGE_DESCRIPTION_FILE \${CMAKE_CURRENT_SOURCE_DIR}/DESCRIPTION)
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "static C++ library for printing")
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cat >> CPackConfig.cmake <<EOF

set(CPACK_RESOURCE_FILE_LICENSE \${CMAKE_CURRENT_SOURCE_DIR}/LICENSE)
set(CPACK_RESOURCE_FILE_README \${CMAKE_CURRENT_SOURCE_DIR}/README.md)
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cat >> CPackConfig.cmake <<EOF

set(CPACK_RPM_PACKAGE_NAME "print-devel")
set(CPACK_RPM_PACKAGE_LICENSE "MIT")
set(CPACK_RPM_PACKAGE_GROUP "print")
set(CPACK_RPM_CHANGELOG_FILE \${CMAKE_CURRENT_SOURCE_DIR}/ChangeLog.md)
set(CPACK_RPM_PACKAGE_RELEASE 1)
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cat >> CPackConfig.cmake <<EOF

set(CPACK_DEBIAN_PACKAGE_NAME "libprint-dev")
set(CPACK_DEBIAN_PACKAGE_PREDEPENDS "cmake >= 3.0")
set(CPACK_DEBIAN_PACKAGE_RELEASE 1)
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cat >> CPackConfig.cmake <<EOF

include(CPack)
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cat >> CMakeLists.txt <<EOF

include(CPackConfig.cmake)
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ gsed -i 's/lab05/lab06/g' README.md
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git add .
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git commit -m"added cpack config"
[master dc172e0] added cpack config
 5 files changed, 103 insertions(+), 74 deletions(-)
 create mode 100644 CPackConfig.cmake
 create mode 100644 ChangeLog.md
 create mode 100644 DESCRIPTION
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git tag v0.1.0.0
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git push origin master --tags
Username for 'https://github.com': ChayokSMedom
Password for 'https://ChayokSMedom@github.com': 
Enumerating objects: 27, done.
Counting objects: 100% (27/27), done.
Delta compression using up to 2 threads
Compressing objects: 100% (18/18), done.
Writing objects: 100% (27/27), 9.51 KiB | 811.00 KiB/s, done.
Total 27 (delta 8), reused 17 (delta 5), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (8/8), done.
To https://github.com/ChayokSMedom/lab06
 * [new branch]      master -> master
 * [new tag]         v0.1.0.0 -> v0.1.0.0
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$  travis login --auto
Command 'travis' not found, but can be installed with:
sudo snap install travis  # version 1.8.9, or
sudo apt  install travis  # version 220729-1build1
See 'snap info travis' for additional versions.
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ sudo snap install travis  # version 1.8.9
travis 1.8.9 from Travis CI✓ installed
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ travis login --auto

Outdated CLI version, run `gem install travis`.
resource not found ({}
)
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ 
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ gem install travis
Fetching net-http-pipeline-1.0.1.gem
Fetching connection_pool-3.0.2.gem
Fetching multi_json-1.21.1.gem
Fetching net-http-persistent-4.0.8.gem
Fetching ffi-1.17.4-x86_64-linux-gnu.gem
Fetching ethon-0.18.0.gem
Fetching typhoeus-1.6.0.gem
Fetching faraday-net_http-3.0.2.gem
Fetching faraday-2.7.12.gem
Fetching faraday-typhoeus-2.0.0.gem
Fetching faraday-retry-2.4.0.gem
Fetching public_suffix-7.0.5.gem
Fetching addressable-2.9.0.gem
Fetching concurrent-ruby-1.3.6.gem
Fetching tzinfo-2.0.6.gem
Fetching i18n-1.14.8.gem
Fetching activesupport-7.0.10.gem
Fetching travis-gh-0.21.0.gem
Fetching rack-3.2.6.gem
Fetching rack-test-2.1.0.gem
Fetching websocket-1.2.11.gem
Fetching pusher-client-0.6.2.gem
Fetching launchy-2.5.2.gem
Fetching json_pure-2.6.3.gem
Fetching travis-1.14.0.gem
Fetching highline-2.1.0.gem
Fetching faraday-rack-2.1.3.gem
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed net-http-pipeline-1.0.1
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed connection_pool-3.0.2
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed net-http-persistent-4.0.8
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed multi_json-1.21.1
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed ffi-1.17.4-x86_64-linux-gnu
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed ethon-0.18.0
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed typhoeus-1.6.0
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed faraday-net_http-3.0.2
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed faraday-2.7.12
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed faraday-typhoeus-2.0.0
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed faraday-retry-2.4.0
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed public_suffix-7.0.5
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed addressable-2.9.0
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed concurrent-ruby-1.3.6
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed tzinfo-2.0.6
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed i18n-1.14.8
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed activesupport-7.0.10
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed travis-gh-0.21.0
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed rack-3.2.6
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed rack-test-2.1.0
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed websocket-1.2.11
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed pusher-client-0.6.2
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
WARNING:  You don't have /home/reyne/.local/share/gem/ruby/3.3.0/bin in your PATH,
	  gem executables (launchy) will not run.
Successfully installed launchy-2.5.2
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed json_pure-2.6.3
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed highline-2.1.0
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
Successfully installed faraday-rack-2.1.3
Defaulting to user installation because default installation directory (/var/lib/gems/3.3.0) is not writable.
WARNING:  You don't have /home/reyne/.local/share/gem/ruby/3.3.0/bin in your PATH,
	  gem executables (travis) will not run.
Successfully installed travis-1.14.0
Parsing documentation for net-http-pipeline-1.0.1
Installing ri documentation for net-http-pipeline-1.0.1
Parsing documentation for connection_pool-3.0.2
Installing ri documentation for connection_pool-3.0.2
Parsing documentation for net-http-persistent-4.0.8
Installing ri documentation for net-http-persistent-4.0.8
Parsing documentation for multi_json-1.21.1
Installing ri documentation for multi_json-1.21.1
Parsing documentation for ffi-1.17.4-x86_64-linux-gnu
Installing ri documentation for ffi-1.17.4-x86_64-linux-gnu
Parsing documentation for ethon-0.18.0
Installing ri documentation for ethon-0.18.0
Parsing documentation for typhoeus-1.6.0
Installing ri documentation for typhoeus-1.6.0
Parsing documentation for faraday-net_http-3.0.2
Installing ri documentation for faraday-net_http-3.0.2
Parsing documentation for faraday-2.7.12
Installing ri documentation for faraday-2.7.12
Parsing documentation for faraday-typhoeus-2.0.0
Installing ri documentation for faraday-typhoeus-2.0.0
Parsing documentation for faraday-retry-2.4.0
Installing ri documentation for faraday-retry-2.4.0
Parsing documentation for public_suffix-7.0.5
Installing ri documentation for public_suffix-7.0.5
Parsing documentation for addressable-2.9.0
Installing ri documentation for addressable-2.9.0
Parsing documentation for concurrent-ruby-1.3.6
Installing ri documentation for concurrent-ruby-1.3.6
Parsing documentation for tzinfo-2.0.6
Installing ri documentation for tzinfo-2.0.6
Parsing documentation for i18n-1.14.8
Installing ri documentation for i18n-1.14.8
Parsing documentation for activesupport-7.0.10
Installing ri documentation for activesupport-7.0.10
Parsing documentation for travis-gh-0.21.0
Installing ri documentation for travis-gh-0.21.0
Parsing documentation for rack-3.2.6
Installing ri documentation for rack-3.2.6
Parsing documentation for rack-test-2.1.0
Installing ri documentation for rack-test-2.1.0
Parsing documentation for websocket-1.2.11
Installing ri documentation for websocket-1.2.11
Parsing documentation for pusher-client-0.6.2
Installing ri documentation for pusher-client-0.6.2
Parsing documentation for launchy-2.5.2
Installing ri documentation for launchy-2.5.2
Parsing documentation for json_pure-2.6.3
Installing ri documentation for json_pure-2.6.3
Parsing documentation for highline-2.1.0
Installing ri documentation for highline-2.1.0
Parsing documentation for faraday-rack-2.1.3
Installing ri documentation for faraday-rack-2.1.3
Parsing documentation for travis-1.14.0
Installing ri documentation for travis-1.14.0
Done installing documentation for net-http-pipeline, connection_pool, net-http-persistent, multi_json, ffi, ethon, typhoeus, faraday-net_http, faraday, faraday-typhoeus, faraday-retry, public_suffix, addressable, concurrent-ruby, tzinfo, i18n, activesupport, travis-gh, rack, rack-test, websocket, pusher-client, launchy, json_pure, highline, faraday-rack, travis after 24 seconds
27 gems installed
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ travis login --auto
Outdated CLI version, run `gem install travis`.
resource not found ({}
)
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ export PATH="$HOME/.local/share/gem/ruby/3.3.0/bin:$PATH"
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ echo 'export PATH="$HOME/.local/share/gem/ruby/3.3.0/bin:$PATH"' >> ~/.bashrc
source ~/.bashrc
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ travis login --auto
<internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require': uninitialized constant JSON::Fragment (NameError)
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/json_pure-2.6.3/lib/json/ext.rb:8:in `<module:Ext>'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/json_pure-2.6.3/lib/json/ext.rb:6:in `<module:JSON>'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/json_pure-2.6.3/lib/json/ext.rb:3:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/json_pure-2.6.3/lib/json.rb:579:in `<module:JSON>'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/json_pure-2.6.3/lib/json.rb:575:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/faraday-2.7.12/lib/faraday/request/json.rb:3:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/faraday-2.7.12/lib/faraday/request.rb:138:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/faraday-2.7.12/lib/faraday.rb:18:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/travis-1.14.0/lib/travis/client/session.rb:6:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/travis-1.14.0/lib/travis/client.rb:9:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/travis-1.14.0/lib/travis/cli.rb:4:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/travis-1.14.0/bin/travis:9:in `<top (required)>'
	from /home/reyne/.local/share/gem/ruby/3.3.0/bin/travis:25:in `load'
	from /home/reyne/.local/share/gem/ruby/3.3.0/bin/travis:25:in `<main>'
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ travis enable
<internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require': uninitialized constant JSON::Fragment (NameError)
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/json_pure-2.6.3/lib/json/ext.rb:8:in `<module:Ext>'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/json_pure-2.6.3/lib/json/ext.rb:6:in `<module:JSON>'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/json_pure-2.6.3/lib/json/ext.rb:3:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/json_pure-2.6.3/lib/json.rb:579:in `<module:JSON>'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/json_pure-2.6.3/lib/json.rb:575:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/faraday-2.7.12/lib/faraday/request/json.rb:3:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/faraday-2.7.12/lib/faraday/request.rb:138:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/faraday-2.7.12/lib/faraday.rb:18:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/travis-1.14.0/lib/travis/client/session.rb:6:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/travis-1.14.0/lib/travis/client.rb:9:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/travis-1.14.0/lib/travis/cli.rb:4:in `<top (required)>'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from <internal:/usr/lib/ruby/vendor_ruby/rubygems/core_ext/kernel_require.rb>:136:in `require'
	from /home/reyne/.local/share/gem/ruby/3.3.0/gems/travis-1.14.0/bin/travis:9:in `<top (required)>'
	from /home/reyne/.local/share/gem/ruby/3.3.0/bin/travis:25:in `load'
	from /home/reyne/.local/share/gem/ruby/3.3.0/bin/travis:25:in `<main>'
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cmake -H. -B_build
-- The CXX compiler identification is GNU 15.2.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Error at /usr/share/cmake-4.2/Modules/CPack.cmake:706 (message):
  CPack license resource file:
  "/home/reyne/ChayokSMedom/workspace/projects/lab06/LICENSE" could not be
  found.
Call Stack (most recent call first):
  /usr/share/cmake-4.2/Modules/CPack.cmake:711 (cpack_check_file_exists)
  CPackConfig.cmake:24 (include)
  CMakeLists.txt:22 (include)


-- Configuring incomplete, errors occurred!
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ touch LICENSE
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cmake -H. -B_build
-- Configuring done (0.1s)
-- Generating done (0.0s)
-- Build files have been written to: /home/reyne/ChayokSMedom/workspace/projects/lab06/_build
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cmake --build _build
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cd _build
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06/_build$ cpack -G "TGZ"
CPack: Create package using TGZ
CPack: Install projects
CPack: - Run preinstall target for: lab05
CPack: - Install project: lab05 []
CPack: Create package
CPack: - package: /home/reyne/ChayokSMedom/workspace/projects/lab06/_build/lab05-1.0-Linux.tar.gz generated.
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06/_build$ cd ..
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cmake -H. -B_build -DCPACK_GENERATOR="TGZ"
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /home/reyne/ChayokSMedom/workspace/projects/lab06/_build
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cmake --build _build --target package
Run CPack packaging tool...
CPack: Create package using TGZ
CPack: Install projects
CPack: - Run preinstall target for: lab05
CPack: - Install project: lab05 []
CPack: Create package
CPack: - package: /home/reyne/ChayokSMedom/workspace/projects/lab06/_build/lab05-1.0-Linux.tar.gz generated.
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ mkdir artifacts
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ mv _build/*.tar.gz artifacts
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ tree artifacts
artifacts
└── lab05-1.0-Linux.tar.gz

1 directory, 1 file
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git add .
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git commit -m "Complete lab06: CPack packaging"
[master ae13397] Complete lab06: CPack packaging
 22 files changed, 3243 insertions(+)
 create mode 100644 LICENSE
 create mode 100644 _build/CMakeCache.txt
 create mode 100644 _build/CMakeFiles/4.2.3/CMakeCXXCompiler.cmake
 create mode 100755 _build/CMakeFiles/4.2.3/CMakeDetermineCompilerABI_CXX.bin
 create mode 100644 _build/CMakeFiles/4.2.3/CMakeSystem.cmake
 create mode 100644 _build/CMakeFiles/4.2.3/CompilerIdCXX/CMakeCXXCompilerId.cpp
 create mode 100755 _build/CMakeFiles/4.2.3/CompilerIdCXX/a.out
 create mode 100644 _build/CMakeFiles/CMakeConfigureLog.yaml
 create mode 100644 _build/CMakeFiles/CMakeDirectoryInformation.cmake
 create mode 100644 _build/CMakeFiles/InstallScripts.json
 create mode 100644 _build/CMakeFiles/Makefile.cmake
 create mode 100644 _build/CMakeFiles/Makefile2
 create mode 100644 _build/CMakeFiles/TargetDirectories.txt
 create mode 100644 _build/CMakeFiles/cmake.check_cache
 create mode 100644 _build/CMakeFiles/progress.marks
 create mode 100644 _build/CPackConfig.cmake
 create mode 100644 _build/CPackSourceConfig.cmake
 create mode 100644 _build/Makefile
 create mode 100644 _build/_CPack_Packages/Linux/TGZ/lab05-1.0-Linux.tar.gz
 create mode 100644 _build/cmake_install.cmake
 create mode 100644 _build/install_manifest.txt
 create mode 100644 artifacts/lab05-1.0-Linux.tar.gz
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git push origin master --tags
Username for 'https://github.com': ChayokSMedom
Password for 'https://ChayokSMedom@github.com': 
Enumerating objects: 30, done.
Counting objects: 100% (30/30), done.
Delta compression using up to 2 threads
Compressing objects: 100% (24/24), done.
Writing objects: 100% (29/29), 24.78 KiB | 1.38 MiB/s, done.
Total 29 (delta 4), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (4/4), completed with 1 local object.
To https://github.com/ChayokSMedom/lab06
   dc172e0..ae13397  master -> master
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ popd
~/ChayokSMedom/workspace
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$  export LAB_NUMBER=06
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$ git clone https://github.com/tp-labs/lab${LAB_NUMBER} tasks/lab${LAB_NUMBER}
Cloning into 'tasks/lab06'...
remote: Enumerating objects: 117, done.
remote: Counting objects: 100% (37/37), done.
remote: Compressing objects: 100% (4/4), done.
remote: Total 117 (delta 35), reused 33 (delta 33), pack-reused 80 (from 1)
Receiving objects: 100% (117/117), 1.33 MiB | 332.00 KiB/s, done.
Resolving deltas: 100% (36/36), done.
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$ mkdir reports/lab${LAB_NUMBER}
mkdir: No such file or directory
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$ mkdir reports
mkdir reports/lab${LAB_NUMBER}
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$ cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$  cd reports/lab${LAB_NUMBER}
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/reports/lab06$  edit REPORT.md
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/reports/lab06$ gist REPORT.md
Error: Got Net::HTTPUnauthorized from gist: {
  "message": "Bad credentials",
  "documentation_url": "https://docs.github.com/rest",
  "status": "401"
}
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/reports/lab06$ edit REPORT.md
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/reports/lab06$ cat REPORT.md
## Laboratory work VI

Данная лабораторная работа посвещена изучению средств пакетирования на примере **CPack**

```sh
$ open https://cmake.org/Wiki/CMake:CPackPackageGenerators
```

## Tasks

- [ ] 1. Создать публичный репозиторий с названием **lab06** на сервисе **GitHub**
- [ ] 2. Выполнить инструкцию учебного материала
- [ ] 3. Ознакомиться со ссылками учебного материала
- [ ] 4. Составить отчет и отправить ссылку личным сообщением в **Slack**

## Tutorial

```sh
$ export GITHUB_USERNAME=<имя_пользователя>
$ export GITHUB_EMAIL=<адрес_почтового_ящика>
$ alias edit=<nano|vi|vim|subl>
$ alias gsed=sed # for *-nix system
```

```sh
$ cd ${GITHUB_USERNAME}/workspace
$ pushd .
$ source scripts/activate
```

```sh
$ git clone https://github.com/${GITHUB_USERNAME}/lab05 projects/lab06
$ cd projects/lab06
$ git remote remove origin
$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab06
```

```sh
$ gsed -i '/project(print)/a\
set(PRINT_VERSION_STRING "v\${PRINT_VERSION}")
' CMakeLists.txt
$ gsed -i '/project(print)/a\
set(PRINT_VERSION\
  \${PRINT_VERSION_MAJOR}.\${PRINT_VERSION_MINOR}.\${PRINT_VERSION_PATCH}.\${PRINT_VERSION_TWEAK})
' CMakeLists.txt
$ gsed -i '/project(print)/a\
set(PRINT_VERSION_TWEAK 0)
' CMakeLists.txt
$ gsed -i '/project(print)/a\
set(PRINT_VERSION_PATCH 0)
' CMakeLists.txt
$ gsed -i '/project(print)/a\
set(PRINT_VERSION_MINOR 1)
' CMakeLists.txt
$ gsed -i '/project(print)/a\
set(PRINT_VERSION_MAJOR 0)
' CMakeLists.txt
$ git diff
```

```sh
$ touch DESCRIPTION && edit DESCRIPTION
$ touch ChangeLog.md
$ export DATE="`LANG=en_US date +'%a %b %d %Y'`"
$ cat > ChangeLog.md <<EOF
* ${DATE} ${GITHUB_USERNAME} <${GITHUB_EMAIL}> 0.1.0.0
- Initial RPM release
EOF
```

```sh
$ cat > CPackConfig.cmake <<EOF
include(InstallRequiredSystemLibraries)
EOF
```

```sh
$ cat >> CPackConfig.cmake <<EOF
set(CPACK_PACKAGE_CONTACT ${GITHUB_EMAIL})
set(CPACK_PACKAGE_VERSION_MAJOR \${PRINT_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR \${PRINT_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH \${PRINT_VERSION_PATCH})
set(CPACK_PACKAGE_VERSION_TWEAK \${PRINT_VERSION_TWEAK})
set(CPACK_PACKAGE_VERSION \${PRINT_VERSION})
set(CPACK_PACKAGE_DESCRIPTION_FILE \${CMAKE_CURRENT_SOURCE_DIR}/DESCRIPTION)
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "static C++ library for printing")
EOF
```

```sh
$ cat >> CPackConfig.cmake <<EOF

set(CPACK_RESOURCE_FILE_LICENSE \${CMAKE_CURRENT_SOURCE_DIR}/LICENSE)
set(CPACK_RESOURCE_FILE_README \${CMAKE_CURRENT_SOURCE_DIR}/README.md)
EOF
```

```sh
$ cat >> CPackConfig.cmake <<EOF

set(CPACK_RPM_PACKAGE_NAME "print-devel")
set(CPACK_RPM_PACKAGE_LICENSE "MIT")
set(CPACK_RPM_PACKAGE_GROUP "print")
set(CPACK_RPM_CHANGELOG_FILE \${CMAKE_CURRENT_SOURCE_DIR}/ChangeLog.md)
set(CPACK_RPM_PACKAGE_RELEASE 1)
EOF
```

```sh
$ cat >> CPackConfig.cmake <<EOF

set(CPACK_DEBIAN_PACKAGE_NAME "libprint-dev")
set(CPACK_DEBIAN_PACKAGE_PREDEPENDS "cmake >= 3.0")
set(CPACK_DEBIAN_PACKAGE_RELEASE 1)
EOF
```

```sh
$ cat >> CPackConfig.cmake <<EOF

include(CPack)
EOF
```

```sh
$ cat >> CMakeLists.txt <<EOF

include(CPackConfig.cmake)
EOF
```

```sh
$ gsed -i 's/lab05/lab06/g' README.md
```

```sh
$ git add .
$ git commit -m"added cpack config"
$ git tag v0.1.0.0
$ git push origin master --tags
```

```sh
$ travis login --auto
$ travis enable
```

```sh
$ cmake -H. -B_build
$ cmake --build _build
$ cd _build
$ cpack -G "TGZ"
$ cd ..
```

```sh
$ cmake -H. -B_build -DCPACK_GENERATOR="TGZ"
$ cmake --build _build --target package
```

```sh
$ mkdir artifacts
$ mv _build/*.tar.gz artifacts
$ tree artifacts
```

## Report

```sh
$ popd
$ export LAB_NUMBER=06
$ git clone https://github.com/tp-labs/lab${LAB_NUMBER} tasks/lab${LAB_NUMBER}
$ mkdir reports/lab${LAB_NUMBER}
$ cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md
$ cd reports/lab${LAB_NUMBER}
$ edit REPORT.md
$ gist REPORT.md
```

## Homework

После того, как вы настроили взаимодействие с системой непрерывной интеграции,</br>
обеспечив автоматическую сборку и тестирование ваших изменений, стоит задуматься</br>
о создание пакетов для измениний, которые помечаются тэгами (см. вкладку [releases](https://github.com/tp-labs/lab06/releases)).</br>
Пакет должен содержать приложение _solver_ из [предыдущего задания](https://github.com/tp-labs/lab03#задание-1)
Таким образом, каждый новый релиз будет состоять из следующих компонентов:
- архивы с файлами исходного кода (`.tar.gz`, `.zip`)
- пакеты с бинарным файлом _solver_ (`.deb`, `.rpm`, `.msi`, `.dmg`)

В качестве подсказки:
```sh
$ cat .travis.yml
os: osx
script:
...
- cpack -G DragNDrop # dmg

$ cat .travis.yml
os: linux
script:
...
- cpack -G DEB # deb

$ cat .travis.yml
os: linux
addons:
  apt:
    packages:
    - rpm
script:
...
- cpack -G RPM # rpm

$ cat appveyor.yml
platform:
- x86
- x64
build_script:
...
- cpack -G WIX # msi
```

Для этого нужно добавить ветвление в конфигурационные файлы для **CI** со следующей логикой:</br>
если **commit** помечен тэгом, то необходимо собрать пакеты (`DEB, RPM, WIX, DragNDrop, ...`) </br>
и разместить их на сервисе **GitHub**. (см. пример для [Travi CI](https://docs.travis-ci.com/user/deployment/releases))</br>

## Links

- [DMG](https://cmake.org/cmake/help/latest/module/CPackDMG.html)
- [DEB](https://cmake.org/cmake/help/latest/module/CPackDeb.html)
- [RPM](https://cmake.org/cmake/help/latest/module/CPackRPM.html)
- [NSIS](https://cmake.org/cmake/help/latest/module/CPackNSIS.html)

```
Copyright (c) 2015-2021 The ISC Authors
```
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/reports/lab06$ 

```
