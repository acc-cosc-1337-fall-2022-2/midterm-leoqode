# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /home/linuxbrew/.linuxbrew/Cellar/cmake/3.24.1/bin/cmake

# The command to remove a file.
RM = /home/linuxbrew/.linuxbrew/Cellar/cmake/3.24.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspace/midterm-leoqode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/midterm-leoqode

# Include any dependencies generated for this target.
include src/question_1/CMakeFiles/q_01_library.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/question_1/CMakeFiles/q_01_library.dir/compiler_depend.make

# Include the progress variables for this target.
include src/question_1/CMakeFiles/q_01_library.dir/progress.make

# Include the compile flags for this target's objects.
include src/question_1/CMakeFiles/q_01_library.dir/flags.make

src/question_1/CMakeFiles/q_01_library.dir/question1.cpp.o: src/question_1/CMakeFiles/q_01_library.dir/flags.make
src/question_1/CMakeFiles/q_01_library.dir/question1.cpp.o: src/question_1/question1.cpp
src/question_1/CMakeFiles/q_01_library.dir/question1.cpp.o: src/question_1/CMakeFiles/q_01_library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/midterm-leoqode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/question_1/CMakeFiles/q_01_library.dir/question1.cpp.o"
	cd /workspace/midterm-leoqode/src/question_1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/question_1/CMakeFiles/q_01_library.dir/question1.cpp.o -MF CMakeFiles/q_01_library.dir/question1.cpp.o.d -o CMakeFiles/q_01_library.dir/question1.cpp.o -c /workspace/midterm-leoqode/src/question_1/question1.cpp

src/question_1/CMakeFiles/q_01_library.dir/question1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/q_01_library.dir/question1.cpp.i"
	cd /workspace/midterm-leoqode/src/question_1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/midterm-leoqode/src/question_1/question1.cpp > CMakeFiles/q_01_library.dir/question1.cpp.i

src/question_1/CMakeFiles/q_01_library.dir/question1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/q_01_library.dir/question1.cpp.s"
	cd /workspace/midterm-leoqode/src/question_1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/midterm-leoqode/src/question_1/question1.cpp -o CMakeFiles/q_01_library.dir/question1.cpp.s

# Object files for target q_01_library
q_01_library_OBJECTS = \
"CMakeFiles/q_01_library.dir/question1.cpp.o"

# External object files for target q_01_library
q_01_library_EXTERNAL_OBJECTS =

src/question_1/libq_01_library.a: src/question_1/CMakeFiles/q_01_library.dir/question1.cpp.o
src/question_1/libq_01_library.a: src/question_1/CMakeFiles/q_01_library.dir/build.make
src/question_1/libq_01_library.a: src/question_1/CMakeFiles/q_01_library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspace/midterm-leoqode/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libq_01_library.a"
	cd /workspace/midterm-leoqode/src/question_1 && $(CMAKE_COMMAND) -P CMakeFiles/q_01_library.dir/cmake_clean_target.cmake
	cd /workspace/midterm-leoqode/src/question_1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/q_01_library.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/question_1/CMakeFiles/q_01_library.dir/build: src/question_1/libq_01_library.a
.PHONY : src/question_1/CMakeFiles/q_01_library.dir/build

src/question_1/CMakeFiles/q_01_library.dir/clean:
	cd /workspace/midterm-leoqode/src/question_1 && $(CMAKE_COMMAND) -P CMakeFiles/q_01_library.dir/cmake_clean.cmake
.PHONY : src/question_1/CMakeFiles/q_01_library.dir/clean

src/question_1/CMakeFiles/q_01_library.dir/depend:
	cd /workspace/midterm-leoqode && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/midterm-leoqode /workspace/midterm-leoqode/src/question_1 /workspace/midterm-leoqode /workspace/midterm-leoqode/src/question_1 /workspace/midterm-leoqode/src/question_1/CMakeFiles/q_01_library.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/question_1/CMakeFiles/q_01_library.dir/depend

