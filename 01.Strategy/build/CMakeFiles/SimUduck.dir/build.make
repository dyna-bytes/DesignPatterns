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
CMAKE_SOURCE_DIR = /home/jetpack/Playground/DesignPatterns/01.Strategy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jetpack/Playground/DesignPatterns/01.Strategy/build

# Include any dependencies generated for this target.
include CMakeFiles/SimUduck.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SimUduck.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SimUduck.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SimUduck.dir/flags.make

CMakeFiles/SimUduck.dir/DuckClass/Duck.c.o: CMakeFiles/SimUduck.dir/flags.make
CMakeFiles/SimUduck.dir/DuckClass/Duck.c.o: ../DuckClass/Duck.c
CMakeFiles/SimUduck.dir/DuckClass/Duck.c.o: CMakeFiles/SimUduck.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetpack/Playground/DesignPatterns/01.Strategy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SimUduck.dir/DuckClass/Duck.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SimUduck.dir/DuckClass/Duck.c.o -MF CMakeFiles/SimUduck.dir/DuckClass/Duck.c.o.d -o CMakeFiles/SimUduck.dir/DuckClass/Duck.c.o -c /home/jetpack/Playground/DesignPatterns/01.Strategy/DuckClass/Duck.c

CMakeFiles/SimUduck.dir/DuckClass/Duck.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimUduck.dir/DuckClass/Duck.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jetpack/Playground/DesignPatterns/01.Strategy/DuckClass/Duck.c > CMakeFiles/SimUduck.dir/DuckClass/Duck.c.i

CMakeFiles/SimUduck.dir/DuckClass/Duck.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimUduck.dir/DuckClass/Duck.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jetpack/Playground/DesignPatterns/01.Strategy/DuckClass/Duck.c -o CMakeFiles/SimUduck.dir/DuckClass/Duck.c.s

CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.o: CMakeFiles/SimUduck.dir/flags.make
CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.o: ../DuckClass/MallardDuck.c
CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.o: CMakeFiles/SimUduck.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetpack/Playground/DesignPatterns/01.Strategy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.o -MF CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.o.d -o CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.o -c /home/jetpack/Playground/DesignPatterns/01.Strategy/DuckClass/MallardDuck.c

CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jetpack/Playground/DesignPatterns/01.Strategy/DuckClass/MallardDuck.c > CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.i

CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jetpack/Playground/DesignPatterns/01.Strategy/DuckClass/MallardDuck.c -o CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.s

CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.o: CMakeFiles/SimUduck.dir/flags.make
CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.o: ../FlyBehaviorInterface/FlyBehavior.c
CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.o: CMakeFiles/SimUduck.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetpack/Playground/DesignPatterns/01.Strategy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.o -MF CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.o.d -o CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.o -c /home/jetpack/Playground/DesignPatterns/01.Strategy/FlyBehaviorInterface/FlyBehavior.c

CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jetpack/Playground/DesignPatterns/01.Strategy/FlyBehaviorInterface/FlyBehavior.c > CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.i

CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jetpack/Playground/DesignPatterns/01.Strategy/FlyBehaviorInterface/FlyBehavior.c -o CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.s

CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.o: CMakeFiles/SimUduck.dir/flags.make
CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.o: ../FlyBehaviorInterface/FlyWithWings.c
CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.o: CMakeFiles/SimUduck.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetpack/Playground/DesignPatterns/01.Strategy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.o -MF CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.o.d -o CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.o -c /home/jetpack/Playground/DesignPatterns/01.Strategy/FlyBehaviorInterface/FlyWithWings.c

CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jetpack/Playground/DesignPatterns/01.Strategy/FlyBehaviorInterface/FlyWithWings.c > CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.i

CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jetpack/Playground/DesignPatterns/01.Strategy/FlyBehaviorInterface/FlyWithWings.c -o CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.s

CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.o: CMakeFiles/SimUduck.dir/flags.make
CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.o: ../FlyBehaviorInterface/FlyNoWay.c
CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.o: CMakeFiles/SimUduck.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetpack/Playground/DesignPatterns/01.Strategy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.o -MF CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.o.d -o CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.o -c /home/jetpack/Playground/DesignPatterns/01.Strategy/FlyBehaviorInterface/FlyNoWay.c

CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jetpack/Playground/DesignPatterns/01.Strategy/FlyBehaviorInterface/FlyNoWay.c > CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.i

CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jetpack/Playground/DesignPatterns/01.Strategy/FlyBehaviorInterface/FlyNoWay.c -o CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.s

CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.o: CMakeFiles/SimUduck.dir/flags.make
CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.o: ../QuackBehaviorInterface/QuackBehavior.c
CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.o: CMakeFiles/SimUduck.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetpack/Playground/DesignPatterns/01.Strategy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.o -MF CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.o.d -o CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.o -c /home/jetpack/Playground/DesignPatterns/01.Strategy/QuackBehaviorInterface/QuackBehavior.c

CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jetpack/Playground/DesignPatterns/01.Strategy/QuackBehaviorInterface/QuackBehavior.c > CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.i

CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jetpack/Playground/DesignPatterns/01.Strategy/QuackBehaviorInterface/QuackBehavior.c -o CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.s

CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.o: CMakeFiles/SimUduck.dir/flags.make
CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.o: ../QuackBehaviorInterface/Quack.c
CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.o: CMakeFiles/SimUduck.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetpack/Playground/DesignPatterns/01.Strategy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.o -MF CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.o.d -o CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.o -c /home/jetpack/Playground/DesignPatterns/01.Strategy/QuackBehaviorInterface/Quack.c

CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jetpack/Playground/DesignPatterns/01.Strategy/QuackBehaviorInterface/Quack.c > CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.i

CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jetpack/Playground/DesignPatterns/01.Strategy/QuackBehaviorInterface/Quack.c -o CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.s

CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.o: CMakeFiles/SimUduck.dir/flags.make
CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.o: ../QuackBehaviorInterface/MuteQuack.c
CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.o: CMakeFiles/SimUduck.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetpack/Playground/DesignPatterns/01.Strategy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.o -MF CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.o.d -o CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.o -c /home/jetpack/Playground/DesignPatterns/01.Strategy/QuackBehaviorInterface/MuteQuack.c

CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jetpack/Playground/DesignPatterns/01.Strategy/QuackBehaviorInterface/MuteQuack.c > CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.i

CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jetpack/Playground/DesignPatterns/01.Strategy/QuackBehaviorInterface/MuteQuack.c -o CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.s

CMakeFiles/SimUduck.dir/main.c.o: CMakeFiles/SimUduck.dir/flags.make
CMakeFiles/SimUduck.dir/main.c.o: ../main.c
CMakeFiles/SimUduck.dir/main.c.o: CMakeFiles/SimUduck.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetpack/Playground/DesignPatterns/01.Strategy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/SimUduck.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SimUduck.dir/main.c.o -MF CMakeFiles/SimUduck.dir/main.c.o.d -o CMakeFiles/SimUduck.dir/main.c.o -c /home/jetpack/Playground/DesignPatterns/01.Strategy/main.c

CMakeFiles/SimUduck.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SimUduck.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jetpack/Playground/DesignPatterns/01.Strategy/main.c > CMakeFiles/SimUduck.dir/main.c.i

CMakeFiles/SimUduck.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SimUduck.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jetpack/Playground/DesignPatterns/01.Strategy/main.c -o CMakeFiles/SimUduck.dir/main.c.s

# Object files for target SimUduck
SimUduck_OBJECTS = \
"CMakeFiles/SimUduck.dir/DuckClass/Duck.c.o" \
"CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.o" \
"CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.o" \
"CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.o" \
"CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.o" \
"CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.o" \
"CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.o" \
"CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.o" \
"CMakeFiles/SimUduck.dir/main.c.o"

# External object files for target SimUduck
SimUduck_EXTERNAL_OBJECTS =

SimUduck: CMakeFiles/SimUduck.dir/DuckClass/Duck.c.o
SimUduck: CMakeFiles/SimUduck.dir/DuckClass/MallardDuck.c.o
SimUduck: CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyBehavior.c.o
SimUduck: CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyWithWings.c.o
SimUduck: CMakeFiles/SimUduck.dir/FlyBehaviorInterface/FlyNoWay.c.o
SimUduck: CMakeFiles/SimUduck.dir/QuackBehaviorInterface/QuackBehavior.c.o
SimUduck: CMakeFiles/SimUduck.dir/QuackBehaviorInterface/Quack.c.o
SimUduck: CMakeFiles/SimUduck.dir/QuackBehaviorInterface/MuteQuack.c.o
SimUduck: CMakeFiles/SimUduck.dir/main.c.o
SimUduck: CMakeFiles/SimUduck.dir/build.make
SimUduck: CMakeFiles/SimUduck.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jetpack/Playground/DesignPatterns/01.Strategy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable SimUduck"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SimUduck.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SimUduck.dir/build: SimUduck
.PHONY : CMakeFiles/SimUduck.dir/build

CMakeFiles/SimUduck.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SimUduck.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SimUduck.dir/clean

CMakeFiles/SimUduck.dir/depend:
	cd /home/jetpack/Playground/DesignPatterns/01.Strategy/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jetpack/Playground/DesignPatterns/01.Strategy /home/jetpack/Playground/DesignPatterns/01.Strategy /home/jetpack/Playground/DesignPatterns/01.Strategy/build /home/jetpack/Playground/DesignPatterns/01.Strategy/build /home/jetpack/Playground/DesignPatterns/01.Strategy/build/CMakeFiles/SimUduck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SimUduck.dir/depend

