# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Software\CMake\bin\cmake.exe

# The command to remove a file.
RM = D:\Software\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Git\BalancingTrolley

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Git\BalancingTrolley\build

# Include any dependencies generated for this target.
include CMakeFiles/MicroKernel.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MicroKernel.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MicroKernel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MicroKernel.dir/flags.make

CMakeFiles/MicroKernel.dir/main.cc.obj: CMakeFiles/MicroKernel.dir/flags.make
CMakeFiles/MicroKernel.dir/main.cc.obj: D:/Git/BalancingTrolley/main.cc
CMakeFiles/MicroKernel.dir/main.cc.obj: CMakeFiles/MicroKernel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Git\BalancingTrolley\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MicroKernel.dir/main.cc.obj"
	D:\Software\Msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MicroKernel.dir/main.cc.obj -MF CMakeFiles\MicroKernel.dir\main.cc.obj.d -o CMakeFiles\MicroKernel.dir\main.cc.obj -c D:\Git\BalancingTrolley\main.cc

CMakeFiles/MicroKernel.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MicroKernel.dir/main.cc.i"
	D:\Software\Msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Git\BalancingTrolley\main.cc > CMakeFiles\MicroKernel.dir\main.cc.i

CMakeFiles/MicroKernel.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MicroKernel.dir/main.cc.s"
	D:\Software\Msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Git\BalancingTrolley\main.cc -o CMakeFiles\MicroKernel.dir\main.cc.s

# Object files for target MicroKernel
MicroKernel_OBJECTS = \
"CMakeFiles/MicroKernel.dir/main.cc.obj"

# External object files for target MicroKernel
MicroKernel_EXTERNAL_OBJECTS =

MicroKernel.exe: CMakeFiles/MicroKernel.dir/main.cc.obj
MicroKernel.exe: CMakeFiles/MicroKernel.dir/build.make
MicroKernel.exe: CMakeFiles/MicroKernel.dir/linkLibs.rsp
MicroKernel.exe: CMakeFiles/MicroKernel.dir/objects1.rsp
MicroKernel.exe: CMakeFiles/MicroKernel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\Git\BalancingTrolley\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MicroKernel.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MicroKernel.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MicroKernel.dir/build: MicroKernel.exe
.PHONY : CMakeFiles/MicroKernel.dir/build

CMakeFiles/MicroKernel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MicroKernel.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MicroKernel.dir/clean

CMakeFiles/MicroKernel.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Git\BalancingTrolley D:\Git\BalancingTrolley D:\Git\BalancingTrolley\build D:\Git\BalancingTrolley\build D:\Git\BalancingTrolley\build\CMakeFiles\MicroKernel.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/MicroKernel.dir/depend

