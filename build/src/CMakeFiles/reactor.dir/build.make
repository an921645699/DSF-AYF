# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/ubuntu/text

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/text/build

# Include any dependencies generated for this target.
include src/CMakeFiles/reactor.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/reactor.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/reactor.dir/flags.make

src/CMakeFiles/reactor.dir/reactor/reactor.cc.o: src/CMakeFiles/reactor.dir/flags.make
src/CMakeFiles/reactor.dir/reactor/reactor.cc.o: ../src/reactor/reactor.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/text/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/reactor.dir/reactor/reactor.cc.o"
	cd /home/ubuntu/text/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reactor.dir/reactor/reactor.cc.o -c /home/ubuntu/text/src/reactor/reactor.cc

src/CMakeFiles/reactor.dir/reactor/reactor.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reactor.dir/reactor/reactor.cc.i"
	cd /home/ubuntu/text/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/text/src/reactor/reactor.cc > CMakeFiles/reactor.dir/reactor/reactor.cc.i

src/CMakeFiles/reactor.dir/reactor/reactor.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reactor.dir/reactor/reactor.cc.s"
	cd /home/ubuntu/text/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/text/src/reactor/reactor.cc -o CMakeFiles/reactor.dir/reactor/reactor.cc.s

src/CMakeFiles/reactor.dir/logger/logger.cc.o: src/CMakeFiles/reactor.dir/flags.make
src/CMakeFiles/reactor.dir/logger/logger.cc.o: ../src/logger/logger.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/text/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/reactor.dir/logger/logger.cc.o"
	cd /home/ubuntu/text/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reactor.dir/logger/logger.cc.o -c /home/ubuntu/text/src/logger/logger.cc

src/CMakeFiles/reactor.dir/logger/logger.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reactor.dir/logger/logger.cc.i"
	cd /home/ubuntu/text/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/text/src/logger/logger.cc > CMakeFiles/reactor.dir/logger/logger.cc.i

src/CMakeFiles/reactor.dir/logger/logger.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reactor.dir/logger/logger.cc.s"
	cd /home/ubuntu/text/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/text/src/logger/logger.cc -o CMakeFiles/reactor.dir/logger/logger.cc.s

src/CMakeFiles/reactor.dir/logger/message.cc.o: src/CMakeFiles/reactor.dir/flags.make
src/CMakeFiles/reactor.dir/logger/message.cc.o: ../src/logger/message.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/text/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/reactor.dir/logger/message.cc.o"
	cd /home/ubuntu/text/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reactor.dir/logger/message.cc.o -c /home/ubuntu/text/src/logger/message.cc

src/CMakeFiles/reactor.dir/logger/message.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reactor.dir/logger/message.cc.i"
	cd /home/ubuntu/text/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/text/src/logger/message.cc > CMakeFiles/reactor.dir/logger/message.cc.i

src/CMakeFiles/reactor.dir/logger/message.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reactor.dir/logger/message.cc.s"
	cd /home/ubuntu/text/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/text/src/logger/message.cc -o CMakeFiles/reactor.dir/logger/message.cc.s

src/CMakeFiles/reactor.dir/logger/timeStamp.cc.o: src/CMakeFiles/reactor.dir/flags.make
src/CMakeFiles/reactor.dir/logger/timeStamp.cc.o: ../src/logger/timeStamp.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/text/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/reactor.dir/logger/timeStamp.cc.o"
	cd /home/ubuntu/text/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reactor.dir/logger/timeStamp.cc.o -c /home/ubuntu/text/src/logger/timeStamp.cc

src/CMakeFiles/reactor.dir/logger/timeStamp.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reactor.dir/logger/timeStamp.cc.i"
	cd /home/ubuntu/text/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/text/src/logger/timeStamp.cc > CMakeFiles/reactor.dir/logger/timeStamp.cc.i

src/CMakeFiles/reactor.dir/logger/timeStamp.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reactor.dir/logger/timeStamp.cc.s"
	cd /home/ubuntu/text/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/text/src/logger/timeStamp.cc -o CMakeFiles/reactor.dir/logger/timeStamp.cc.s

# Object files for target reactor
reactor_OBJECTS = \
"CMakeFiles/reactor.dir/reactor/reactor.cc.o" \
"CMakeFiles/reactor.dir/logger/logger.cc.o" \
"CMakeFiles/reactor.dir/logger/message.cc.o" \
"CMakeFiles/reactor.dir/logger/timeStamp.cc.o"

# External object files for target reactor
reactor_EXTERNAL_OBJECTS =

../bin/reactor: src/CMakeFiles/reactor.dir/reactor/reactor.cc.o
../bin/reactor: src/CMakeFiles/reactor.dir/logger/logger.cc.o
../bin/reactor: src/CMakeFiles/reactor.dir/logger/message.cc.o
../bin/reactor: src/CMakeFiles/reactor.dir/logger/timeStamp.cc.o
../bin/reactor: src/CMakeFiles/reactor.dir/build.make
../bin/reactor: src/CMakeFiles/reactor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/text/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../../bin/reactor"
	cd /home/ubuntu/text/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reactor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/reactor.dir/build: ../bin/reactor

.PHONY : src/CMakeFiles/reactor.dir/build

src/CMakeFiles/reactor.dir/clean:
	cd /home/ubuntu/text/build/src && $(CMAKE_COMMAND) -P CMakeFiles/reactor.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/reactor.dir/clean

src/CMakeFiles/reactor.dir/depend:
	cd /home/ubuntu/text/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/text /home/ubuntu/text/src /home/ubuntu/text/build /home/ubuntu/text/build/src /home/ubuntu/text/build/src/CMakeFiles/reactor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/reactor.dir/depend
