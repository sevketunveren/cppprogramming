# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alp/Documents/su/cppprogramming/CppCh3Ex3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alp/Documents/su/cppprogramming/CppCh3Ex3/build

# Include any dependencies generated for this target.
include CMakeFiles/CppCh3S1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CppCh3S1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CppCh3S1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CppCh3S1.dir/flags.make

CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.o: CMakeFiles/CppCh3S1.dir/flags.make
CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.o: ../src/ISBN.cpp
CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.o: CMakeFiles/CppCh3S1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alp/Documents/su/cppprogramming/CppCh3Ex3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.o -MF CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.o.d -o CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.o -c /home/alp/Documents/su/cppprogramming/CppCh3Ex3/src/ISBN.cpp

CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alp/Documents/su/cppprogramming/CppCh3Ex3/src/ISBN.cpp > CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.i

CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alp/Documents/su/cppprogramming/CppCh3Ex3/src/ISBN.cpp -o CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.s

CMakeFiles/CppCh3S1.dir/src/main.cpp.o: CMakeFiles/CppCh3S1.dir/flags.make
CMakeFiles/CppCh3S1.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/CppCh3S1.dir/src/main.cpp.o: CMakeFiles/CppCh3S1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alp/Documents/su/cppprogramming/CppCh3Ex3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CppCh3S1.dir/src/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CppCh3S1.dir/src/main.cpp.o -MF CMakeFiles/CppCh3S1.dir/src/main.cpp.o.d -o CMakeFiles/CppCh3S1.dir/src/main.cpp.o -c /home/alp/Documents/su/cppprogramming/CppCh3Ex3/src/main.cpp

CMakeFiles/CppCh3S1.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppCh3S1.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alp/Documents/su/cppprogramming/CppCh3Ex3/src/main.cpp > CMakeFiles/CppCh3S1.dir/src/main.cpp.i

CMakeFiles/CppCh3S1.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppCh3S1.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alp/Documents/su/cppprogramming/CppCh3Ex3/src/main.cpp -o CMakeFiles/CppCh3S1.dir/src/main.cpp.s

# Object files for target CppCh3S1
CppCh3S1_OBJECTS = \
"CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.o" \
"CMakeFiles/CppCh3S1.dir/src/main.cpp.o"

# External object files for target CppCh3S1
CppCh3S1_EXTERNAL_OBJECTS =

CppCh3S1: CMakeFiles/CppCh3S1.dir/src/ISBN.cpp.o
CppCh3S1: CMakeFiles/CppCh3S1.dir/src/main.cpp.o
CppCh3S1: CMakeFiles/CppCh3S1.dir/build.make
CppCh3S1: CMakeFiles/CppCh3S1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alp/Documents/su/cppprogramming/CppCh3Ex3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable CppCh3S1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CppCh3S1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CppCh3S1.dir/build: CppCh3S1
.PHONY : CMakeFiles/CppCh3S1.dir/build

CMakeFiles/CppCh3S1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CppCh3S1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CppCh3S1.dir/clean

CMakeFiles/CppCh3S1.dir/depend:
	cd /home/alp/Documents/su/cppprogramming/CppCh3Ex3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alp/Documents/su/cppprogramming/CppCh3Ex3 /home/alp/Documents/su/cppprogramming/CppCh3Ex3 /home/alp/Documents/su/cppprogramming/CppCh3Ex3/build /home/alp/Documents/su/cppprogramming/CppCh3Ex3/build /home/alp/Documents/su/cppprogramming/CppCh3Ex3/build/CMakeFiles/CppCh3S1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CppCh3S1.dir/depend

