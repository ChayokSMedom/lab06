# Полная работа в терминале:

```
reyne@reyne-VirtualBox:~$ export GITHUB_USERNAME=ChayokSMedom
reyne@reyne-VirtualBox:~$ cd ~/${GITHUB_USERNAME}/workspace
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$ mkdir -p ~/${GITHUB_USERNAME}/workspace
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$ cd ~/${GITHUB_USERNAME}/workspace
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$ mkdir -p projects/lab06
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace$ cd projects/lab06
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cat > print.hpp <<'EOF'
#ifndef PRINT_HPP
#define PRINT_HPP

#include <iostream>
#include <fstream>
#include <string>

void print(const std::string& text, std::ostream& out = std::cout) {
    out << text;
}

void print(const std::string& text, std::ofstream& out) {
    out << text;
}

#endif
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git init
Reinitialized existing Git repository in /home/reyne/ChayokSMedom/workspace/projects/lab06/.git/
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git add print.hpp
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git commit -m "initial commit with print.hpp"
[master (root-commit) a2397c7] initial commit with print.hpp
 3 files changed, 20 insertions(+)
 create mode 100644 .gitmodules
 create mode 100644 print.hpp
 create mode 160000 third-party/gtest
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ mkdir -p third-party
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git submodule add https://github.com/google/googletest third-party/gtest
fatal: 'third-party/gtest' already exists in the index
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git rm -r --cached third-party/gtest
rm 'third-party/gtest'
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ rm -rf third-party/gtest
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git submodule add https://github.com/google/googletest third-party/gtest
fatal: A git directory for 'third-party/gtest' is found locally with remote(s):
  origin	https://github.com/google/googletest
If you want to reuse this local git directory instead of cloning again from
  https://github.com/google/googletest
use the '--force' option. If the local git directory is not the correct repo
or you are unsure what this means choose another name with the '--name' option.
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git submodule add --force https://github.com/google/googletest third-party/gtest
Reactivating local git directory for submodule 'third-party/gtest'
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cd third-party/gtest && git checkout release-1.8.1 && cd ../..
HEAD is now at 2fe3bd99 Merge pull request #1433 from dsacre/fix-clang-warnings
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git add .
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git commit -m "added gtest framework"
On branch master
nothing to commit, working tree clean
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ ls -la third-party/
total 12
drwxrwxr-x 3 reyne reyne 4096 May 18 12:27 .
drwxrwxr-x 4 reyne reyne 4096 May 18 12:27 ..
drwxrwxr-x 5 reyne reyne 4096 May 18 12:27 gtest
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git status
On branch master
nothing to commit, working tree clean
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cat > CMakeLists.txt <<'EOF'
cmake_minimum_required(VERSION 3.10)
project(lab06)

option(BUILD_EXAMPLES "Build examples" OFF)
option(BUILD_TESTS "Build tests" OFF)

add_library(${PROJECT_NAME} print.hpp)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  file(GLOB ${PROJECT_NAME}_TEST_SOURCES tests/*.cpp)
  add_executable(check ${${PROJECT_NAME}_TEST_SOURCES})
  target_link_libraries(check ${PROJECT_NAME} gtest_main)
  add_test(NAME check COMMAND check)
endif()
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ mkdir -p tests
cat > tests/test1.cpp <<'EOF'
#include <print.hpp>
#include <gtest/gtest.h>
#include <fstream>
#include <string>

TEST(Print, InFileStream)
{
  std::string filepath = "file.txt";
  std::string text = "hello";
  std::ofstream out{filepath};

  print(text, out);
  out.close();

  std::string result;
  std::ifstream in{filepath};
  in >> result;

  EXPECT_EQ(result, text);
}
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git add CMakeLists.txt tests
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git commit -m "added CMakeLists.txt and tests"
[master 3dd00d1] added CMakeLists.txt and tests
 2 files changed, 36 insertions(+)
 create mode 100644 CMakeLists.txt
 create mode 100644 tests/test1.cpp
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cmake -H. -B_build -DBUILD_TESTS=ON
-- The C compiler identification is GNU 15.2.0
-- The CXX compiler identification is GNU 15.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Error at third-party/gtest/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 has been removed from CMake.

  Update the VERSION argument <min> value.  Or, use the <min>...<max> syntax
  to tell CMake that the project requires at least <min> but has been updated
  to work with policies introduced by <max> or earlier.

  Or, add -DCMAKE_POLICY_VERSION_MINIMUM=3.5 to try configuring anyway.


-- Configuring incomplete, errors occurred!
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ rm -rf _build
cmake -H. -B_build -DBUILD_TESTS=ON
cmake --build _build
cmake --build _build --target test
-- The C compiler identification is GNU 15.2.0
-- The CXX compiler identification is GNU 15.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CMake Error at third-party/gtest/CMakeLists.txt:1 (cmake_minimum_required):
  Compatibility with CMake < 3.5 has been removed from CMake.

  Update the VERSION argument <min> value.  Or, use the <min>...<max> syntax
  to tell CMake that the project requires at least <min> but has been updated
  to work with policies introduced by <max> or earlier.

  Or, add -DCMAKE_POLICY_VERSION_MINIMUM=3.5 to try configuring anyway.


-- Configuring incomplete, errors occurred!
gmake: Makefile: No such file or directory
gmake: *** No rule to make target 'Makefile'.  Stop.
gmake: Makefile: No such file or directory
gmake: *** No rule to make target 'Makefile'.  Stop.
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cd ~/ChayokSMedom/workspace/projects/lab06
cd third-party/gtest
git checkout main
cd ../..
Previous HEAD position was 2fe3bd99 Merge pull request #1433 from dsacre/fix-clang-warnings
Switched to branch 'main'
Your branch is up to date with 'origin/main'.
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cmake -H. -B_build -DBUILD_TESTS=ON
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (0.4s)
CMake Error: Cannot determine link language for target "lab06".
CMake Error: CMake can not determine linker language for target: lab06
-- Generating done (0.0s)
CMake Generate step failed.  Build files cannot be regenerated correctly.
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cat > CMakeLists.txt <<'EOF'
cmake_minimum_required(VERSION 3.10)
project(lab06 VERSION 1.0 LANGUAGES CXX)

option(BUILD_EXAMPLES "Build examples" OFF)
option(BUILD_TESTS "Build tests" OFF)

# Создаём интерфейсную библиотеку для header-only
add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  
  file(GLOB ${PROJECT_NAME}_TEST_SOURCES tests/*.cpp)
  add_executable(check ${${PROJECT_NAME}_TEST_SOURCES})
  target_link_libraries(check ${PROJECT_NAME} gtest_main)
  target_include_directories(check PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
  add_test(NAME check COMMAND check)
endif()
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ rm -rf _build
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cmake -H. -B_build -DBUILD_TESTS=ON
-- The CXX compiler identification is GNU 15.2.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- The C compiler identification is GNU 15.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Configuring done (1.2s)
-- Generating done (0.0s)
-- Build files have been written to: /home/reyne/ChayokSMedom/workspace/projects/lab06/_build
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cmake --build _build
[ 10%] Building CXX object third-party/gtest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 20%] Linking CXX static library ../../../lib/libgtest.a
[ 20%] Built target gtest
[ 30%] Building CXX object third-party/gtest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[ 40%] Linking CXX static library ../../../lib/libgtest_main.a
[ 40%] Built target gtest_main
[ 50%] Building CXX object CMakeFiles/check.dir/tests/test1.cpp.o
[ 60%] Linking CXX executable check
[ 60%] Built target check
[ 70%] Building CXX object third-party/gtest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 80%] Linking CXX static library ../../../lib/libgmock.a
[ 80%] Built target gmock
[ 90%] Building CXX object third-party/gtest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[100%] Linking CXX static library ../../../lib/libgmock_main.a
[100%] Built target gmock_main
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cmake --build _build --target test
Running tests...
Test project /home/reyne/ChayokSMedom/workspace/projects/lab06/_build
    Start 1: check
1/1 Test #1: check ............................   Passed    0.01 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.01 sec
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git add CMakeLists.txt third-party/gtest
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git commit -m "fixed CMakeLists.txt and updated gtest to latest version"
[master 9a1ba8b] fixed CMakeLists.txt and updated gtest to latest version
 2 files changed, 7 insertions(+), 3 deletions(-)
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git remote add origin https://github.com/ChayokSMedom/lab06.git
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git branch -M master
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git push -u origin master
Username for 'https://github.com': ChayokSMedom
Password for 'https://ChayokSMedom@github.com': 
Enumerating objects: 14, done.
Counting objects: 100% (14/14), done.
Delta compression using up to 2 threads
Compressing objects: 100% (11/11), done.
Writing objects: 100% (14/14), 1.83 KiB | 469.00 KiB/s, done.
Total 14 (delta 3), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (3/3), done.
To https://github.com/ChayokSMedom/lab06.git
 * [new branch]      master -> master
branch 'master' set up to track 'origin/master'.
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cat > .travis.yml <<'EOF'
language: cpp
sudo: required
dist: xenial

before_script:
  - sudo apt-get update
  - sudo apt-get install -y cmake

script:
  - cmake -H. -B_build -DBUILD_TESTS=ON
  - cmake --build _build
  - cmake --build _build --target test
EOF
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git add .travis.yml
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git commit -m "added travis ci"
[master 8996e32] added travis ci
 1 file changed, 12 insertions(+)
 create mode 100644 .travis.yml
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git push origin main
error: src refspec main does not match any
error: failed to push some refs to 'https://github.com/ChayokSMedom/lab06.git'
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git push origin master
Username for 'https://github.com': ChayokSMedom
Password for 'https://ChayokSMedom@github.com': 
Enumerating objects: 4, done.
Counting objects: 100% (4/4), done.
Delta compression using up to 2 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 409 bytes | 204.00 KiB/s, done.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/ChayokSMedom/lab06.git
   9a1ba8b..8996e32  master -> master
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ mkdir -p artifacts
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ sleep 20 && gnome-screenshot --file artifacts/screenshot.png
Command 'gnome-screenshot' not found, but can be installed with:
sudo apt install gnome-screenshot
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ sudo apt install gnome-screenshot
[sudo: authenticate] Password:             
The following packages were automatically installed and are no longer required:
  linux-headers-7.0.0-14                   linux-modules-7.0.0-14-generic
  linux-headers-7.0.0-14-generic           linux-tools-7.0.0-14
  linux-image-unsigned-7.0.0-14-generic    linux-tools-7.0.0-14-generic
  linux-main-modules-zfs-7.0.0-14-generic
Use 'sudo apt autoremove' to remove them.

Installing:
  gnome-screenshot

Summary:
  Upgrading: 0, Installing: 1, Removing: 0, Not Upgrading: 2
  Download size: 180 kB
  Space needed: 1,146 kB / 9,875 MB available

Get:1 http://archive.ubuntu.com/ubuntu resolute/universe amd64 gnome-screenshot amd64 41.0-3build1 [180 kB]
Fetched 180 kB in 1s (219 kB/s)      
Selecting previously unselected package gnome-screenshot.
(Reading database… 225169 files and directories currently installed.)
Preparing to unpack …/gnome-screenshot_41.0-3build1_amd64.deb…
Unpacking gnome-screenshot (41.0-3build1)…
Setting up gnome-screenshot (41.0-3build1)…
Processing triggers for man-db (2.13.1-1build1)…
Processing triggers for libglib2.0-0t64:amd64 (2.88.0-1)…
Processing triggers for desktop-file-utils (0.28-1build1)…
Processing triggers for hicolor-icon-theme (0.18-2build1)…
Processing triggers for gnome-menus (3.38.1-1ubuntu1)…
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ sleep 20 && gnome-screenshot --file artifacts/screenshot.png
** Message: 12:40:10.464: Unable to use GNOME Shell's builtin screenshot interface, resorting to fallback X11.

(gnome-screenshot:6605): Gdk-CRITICAL **: 12:40:10.465: gdk_pixbuf_get_from_surface: assertion 'width > 0 && height > 0' failed

(gnome-screenshot:6605): GdkPixbuf-CRITICAL **: 12:40:10.467: gdk_pixbuf_get_width: assertion 'GDK_IS_PIXBUF (pixbuf)' failed

(gnome-screenshot:6605): GdkPixbuf-CRITICAL **: 12:40:10.467: gdk_pixbuf_get_height: assertion 'GDK_IS_PIXBUF (pixbuf)' failed
*** BUG ***
In pixman_region32_init_rect: Invalid rectangle passed
Set a breakpoint on '_pixman_log_error' to debug


(gnome-screenshot:6605): GdkPixbuf-CRITICAL **: 12:40:10.467: gdk_pixbuf_get_width: assertion 'GDK_IS_PIXBUF (pixbuf)' failed

(gnome-screenshot:6605): GdkPixbuf-CRITICAL **: 12:40:10.467: gdk_pixbuf_get_height: assertion 'GDK_IS_PIXBUF (pixbuf)' failed

(gnome-screenshot:6605): Gtk-CRITICAL **: 12:40:10.661: gtk_window_resize: assertion 'width > 0' failed

** (gnome-screenshot:6605): CRITICAL **: 12:40:10.662: Unable to capture a screenshot of any window

** Message: 12:45:41.312: Unable to use GNOME Shell's builtin screenshot interface, resorting to fallback X11.

(gnome-screenshot:6605): Gdk-CRITICAL **: 12:45:41.312: gdk_pixbuf_get_from_surface: assertion 'width > 0 && height > 0' failed

(gnome-screenshot:6605): GdkPixbuf-CRITICAL **: 12:45:41.313: gdk_pixbuf_get_width: assertion 'GDK_IS_PIXBUF (pixbuf)' failed

(gnome-screenshot:6605): GdkPixbuf-CRITICAL **: 12:45:41.313: gdk_pixbuf_get_height: assertion 'GDK_IS_PIXBUF (pixbuf)' failed
*** BUG ***
In pixman_region32_init_rect: Invalid rectangle passed
Set a breakpoint on '_pixman_log_error' to debug


(gnome-screenshot:6605): GdkPixbuf-CRITICAL **: 12:45:41.313: gdk_pixbuf_get_width: assertion 'GDK_IS_PIXBUF (pixbuf)' failed

(gnome-screenshot:6605): GdkPixbuf-CRITICAL **: 12:45:41.313: gdk_pixbuf_get_height: assertion 'GDK_IS_PIXBUF (pixbuf)' failed

(gnome-screenshot:6605): Gtk-CRITICAL **: 12:45:41.410: gtk_window_resize: assertion 'width > 0' failed

** (gnome-screenshot:6605): CRITICAL **: 12:45:41.410: Unable to capture a screenshot of any window

```

```
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ popd
bash: popd: directory stack empty
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$  export LAB_NUMBER=05
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ git clone https://github.com/tp-labs/lab${LAB_NUMBER} tasks/lab${LAB_NUMBER}
Cloning into 'tasks/lab06'...
remote: Enumerating objects: 137, done.
remote: Counting objects: 100% (25/25), done.
remote: Compressing objects: 100% (9/9), done.
remote: Total 137 (delta 18), reused 16 (delta 16), pack-reused 112 (from 1)
Receiving objects: 100% (137/137), 918.92 KiB | 231.00 KiB/s, done.
Resolving deltas: 100% (60/60), done.
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ mkdir reports/lab${LAB_NUMBER}
mkdir: No such file or directory
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md
cp: cannot create regular file 'reports/lab06/REPORT.md': No such file or directory
reyne@reyne-VirtualBox:~/ChayokSMedom/workspace/projects/lab06$ cd ~/workspace
reyne@reyne-VirtualBox:~/workspace$ mkdir -p reports/lab06
reyne@reyne-VirtualBox:~/workspace$ cp tasks/lab06/README.md reports/lab06/REPORT.md 2>/dev/null || echo "No tasks folder, creating manual report"
No tasks folder, creating manual report
reyne@reyne-VirtualBox:~/workspace$ cd ~/workspace/reports/lab06
reyne@reyne-VirtualBox:~/workspace/reports/lab06$ cat > REPORT.md <<'EOF'
> 
> # Лабораторная работа №5

## Тема
Изучение фреймворка для тестирования Google Test (GTest)

## Цель работы
Научиться использовать GTest для модульного тестирования C++ кода

## Выполнение

### 1. Создание репозитория
- Создан публичный репозиторий lab06 на GitHub
- Клонирован и настроен проект

### 2. Подключение Google Test
- GTest добавлен как git submodule
- Использована последняя версия (main)

### 3. Написание тестов
- Создан тест для функции print()
- Проверяется вывод текста в файл

### 4. Сборка и запуск
- Использован CMake с флагом BUILD_TESTS=ON
- Тесты успешно собраны и запущены

## Результаты тестирования
> ## Ссылка на репозиторий
https://github.com/ChayokSMedom/lab06

## Вывод
Фреймворк Google Test успешно установлен и настроен. Тесты проходят без ошибок.
EOF
reyne@reyne-VirtualBox:~/workspace/reports/lab06$ pwd
/home/reyne/workspace/reports/lab06
reyne@reyne-VirtualBox:~/workspace/reports/lab06$ cat REPORT.md
# Лабораторная работа №5

## Тема
Изучение фреймворка для тестирования Google Test (GTest)

## Цель работы
Научиться использовать GTest для модульного тестирования C++ кода

## Выполнение

### 1. Создание репозитория
- Создан публичный репозиторий lab06 на GitHub
- Клонирован и настроен проект

### 2. Подключение Google Test
- GTest добавлен как git submodule
- Использована последняя версия (main)

### 3. Написание тестов
- Создан тест для функции print()
- Проверяется вывод текста в файл

### 4. Сборка и запуск
- Использован CMake с флагом BUILD_TESTS=ON
- Тесты успешно собраны и запущены

## Результаты тестирования
## Ссылка на репозиторий
https://github.com/ChayokSMedom/lab06

## Вывод
Фреймворк Google Test успешно установлен и настроен. Тесты проходят без ошибок.
reyne@reyne-VirtualBox:~/workspace/reports/lab06$ 
```
