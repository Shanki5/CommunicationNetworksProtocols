# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shankrith/CommunicationNetworks/C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shankrith/CommunicationNetworks/C++/build

# Include any dependencies generated for this target.
include CMakeFiles/goBackN.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/goBackN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/goBackN.dir/flags.make

CMakeFiles/goBackN.dir/src/goBackN.cpp.o: CMakeFiles/goBackN.dir/flags.make
CMakeFiles/goBackN.dir/src/goBackN.cpp.o: ../src/goBackN.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shankrith/CommunicationNetworks/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/goBackN.dir/src/goBackN.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/goBackN.dir/src/goBackN.cpp.o -c /home/shankrith/CommunicationNetworks/C++/src/goBackN.cpp

CMakeFiles/goBackN.dir/src/goBackN.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/goBackN.dir/src/goBackN.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shankrith/CommunicationNetworks/C++/src/goBackN.cpp > CMakeFiles/goBackN.dir/src/goBackN.cpp.i

CMakeFiles/goBackN.dir/src/goBackN.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/goBackN.dir/src/goBackN.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shankrith/CommunicationNetworks/C++/src/goBackN.cpp -o CMakeFiles/goBackN.dir/src/goBackN.cpp.s

CMakeFiles/goBackN.dir/src/goBackN.cpp.o.requires:

.PHONY : CMakeFiles/goBackN.dir/src/goBackN.cpp.o.requires

CMakeFiles/goBackN.dir/src/goBackN.cpp.o.provides: CMakeFiles/goBackN.dir/src/goBackN.cpp.o.requires
	$(MAKE) -f CMakeFiles/goBackN.dir/build.make CMakeFiles/goBackN.dir/src/goBackN.cpp.o.provides.build
.PHONY : CMakeFiles/goBackN.dir/src/goBackN.cpp.o.provides

CMakeFiles/goBackN.dir/src/goBackN.cpp.o.provides.build: CMakeFiles/goBackN.dir/src/goBackN.cpp.o


# Object files for target goBackN
goBackN_OBJECTS = \
"CMakeFiles/goBackN.dir/src/goBackN.cpp.o"

# External object files for target goBackN
goBackN_EXTERNAL_OBJECTS =

goBackN: CMakeFiles/goBackN.dir/src/goBackN.cpp.o
goBackN: CMakeFiles/goBackN.dir/build.make
goBackN: CMakeFiles/goBackN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shankrith/CommunicationNetworks/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable goBackN"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/goBackN.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/goBackN.dir/build: goBackN

.PHONY : CMakeFiles/goBackN.dir/build

CMakeFiles/goBackN.dir/requires: CMakeFiles/goBackN.dir/src/goBackN.cpp.o.requires

.PHONY : CMakeFiles/goBackN.dir/requires

CMakeFiles/goBackN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/goBackN.dir/cmake_clean.cmake
.PHONY : CMakeFiles/goBackN.dir/clean

CMakeFiles/goBackN.dir/depend:
	cd /home/shankrith/CommunicationNetworks/C++/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shankrith/CommunicationNetworks/C++ /home/shankrith/CommunicationNetworks/C++ /home/shankrith/CommunicationNetworks/C++/build /home/shankrith/CommunicationNetworks/C++/build /home/shankrith/CommunicationNetworks/C++/build/CMakeFiles/goBackN.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/goBackN.dir/depend

