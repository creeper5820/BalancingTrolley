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
CMAKE_SOURCE_DIR = /home/creeper5820/Documents/一些文档/BalancingTrolley

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/creeper5820/Documents/一些文档/BalancingTrolley/build

# Include any dependencies generated for this target.
include CMakeFiles/BalancingTrolley.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BalancingTrolley.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BalancingTrolley.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BalancingTrolley.dir/flags.make

CMakeFiles/BalancingTrolley.dir/main.cc.o: CMakeFiles/BalancingTrolley.dir/flags.make
CMakeFiles/BalancingTrolley.dir/main.cc.o: ../main.cc
CMakeFiles/BalancingTrolley.dir/main.cc.o: CMakeFiles/BalancingTrolley.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/creeper5820/Documents/一些文档/BalancingTrolley/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BalancingTrolley.dir/main.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BalancingTrolley.dir/main.cc.o -MF CMakeFiles/BalancingTrolley.dir/main.cc.o.d -o CMakeFiles/BalancingTrolley.dir/main.cc.o -c /home/creeper5820/Documents/一些文档/BalancingTrolley/main.cc

CMakeFiles/BalancingTrolley.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BalancingTrolley.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/creeper5820/Documents/一些文档/BalancingTrolley/main.cc > CMakeFiles/BalancingTrolley.dir/main.cc.i

CMakeFiles/BalancingTrolley.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BalancingTrolley.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/creeper5820/Documents/一些文档/BalancingTrolley/main.cc -o CMakeFiles/BalancingTrolley.dir/main.cc.s

# Object files for target BalancingTrolley
BalancingTrolley_OBJECTS = \
"CMakeFiles/BalancingTrolley.dir/main.cc.o"

# External object files for target BalancingTrolley
BalancingTrolley_EXTERNAL_OBJECTS =

BalancingTrolley: CMakeFiles/BalancingTrolley.dir/main.cc.o
BalancingTrolley: CMakeFiles/BalancingTrolley.dir/build.make
BalancingTrolley: CMakeFiles/BalancingTrolley.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/creeper5820/Documents/一些文档/BalancingTrolley/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BalancingTrolley"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BalancingTrolley.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BalancingTrolley.dir/build: BalancingTrolley
.PHONY : CMakeFiles/BalancingTrolley.dir/build

CMakeFiles/BalancingTrolley.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BalancingTrolley.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BalancingTrolley.dir/clean

CMakeFiles/BalancingTrolley.dir/depend:
	cd /home/creeper5820/Documents/一些文档/BalancingTrolley/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/creeper5820/Documents/一些文档/BalancingTrolley /home/creeper5820/Documents/一些文档/BalancingTrolley /home/creeper5820/Documents/一些文档/BalancingTrolley/build /home/creeper5820/Documents/一些文档/BalancingTrolley/build /home/creeper5820/Documents/一些文档/BalancingTrolley/build/CMakeFiles/BalancingTrolley.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BalancingTrolley.dir/depend

