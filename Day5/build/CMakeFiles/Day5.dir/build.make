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
CMAKE_SOURCE_DIR = /home/nhomnhom0/learn_Cpp/Day5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nhomnhom0/learn_Cpp/Day5/build

# Include any dependencies generated for this target.
include CMakeFiles/Day5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Day5.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Day5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Day5.dir/flags.make

CMakeFiles/Day5.dir/main.cpp.o: CMakeFiles/Day5.dir/flags.make
CMakeFiles/Day5.dir/main.cpp.o: ../main.cpp
CMakeFiles/Day5.dir/main.cpp.o: CMakeFiles/Day5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nhomnhom0/learn_Cpp/Day5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Day5.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Day5.dir/main.cpp.o -MF CMakeFiles/Day5.dir/main.cpp.o.d -o CMakeFiles/Day5.dir/main.cpp.o -c /home/nhomnhom0/learn_Cpp/Day5/main.cpp

CMakeFiles/Day5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Day5.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nhomnhom0/learn_Cpp/Day5/main.cpp > CMakeFiles/Day5.dir/main.cpp.i

CMakeFiles/Day5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Day5.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nhomnhom0/learn_Cpp/Day5/main.cpp -o CMakeFiles/Day5.dir/main.cpp.s

CMakeFiles/Day5.dir/src/perimeter.cpp.o: CMakeFiles/Day5.dir/flags.make
CMakeFiles/Day5.dir/src/perimeter.cpp.o: ../src/perimeter.cpp
CMakeFiles/Day5.dir/src/perimeter.cpp.o: CMakeFiles/Day5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nhomnhom0/learn_Cpp/Day5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Day5.dir/src/perimeter.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Day5.dir/src/perimeter.cpp.o -MF CMakeFiles/Day5.dir/src/perimeter.cpp.o.d -o CMakeFiles/Day5.dir/src/perimeter.cpp.o -c /home/nhomnhom0/learn_Cpp/Day5/src/perimeter.cpp

CMakeFiles/Day5.dir/src/perimeter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Day5.dir/src/perimeter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nhomnhom0/learn_Cpp/Day5/src/perimeter.cpp > CMakeFiles/Day5.dir/src/perimeter.cpp.i

CMakeFiles/Day5.dir/src/perimeter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Day5.dir/src/perimeter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nhomnhom0/learn_Cpp/Day5/src/perimeter.cpp -o CMakeFiles/Day5.dir/src/perimeter.cpp.s

CMakeFiles/Day5.dir/src/divide.cpp.o: CMakeFiles/Day5.dir/flags.make
CMakeFiles/Day5.dir/src/divide.cpp.o: ../src/divide.cpp
CMakeFiles/Day5.dir/src/divide.cpp.o: CMakeFiles/Day5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nhomnhom0/learn_Cpp/Day5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Day5.dir/src/divide.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Day5.dir/src/divide.cpp.o -MF CMakeFiles/Day5.dir/src/divide.cpp.o.d -o CMakeFiles/Day5.dir/src/divide.cpp.o -c /home/nhomnhom0/learn_Cpp/Day5/src/divide.cpp

CMakeFiles/Day5.dir/src/divide.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Day5.dir/src/divide.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nhomnhom0/learn_Cpp/Day5/src/divide.cpp > CMakeFiles/Day5.dir/src/divide.cpp.i

CMakeFiles/Day5.dir/src/divide.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Day5.dir/src/divide.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nhomnhom0/learn_Cpp/Day5/src/divide.cpp -o CMakeFiles/Day5.dir/src/divide.cpp.s

CMakeFiles/Day5.dir/src/power_recursive.cpp.o: CMakeFiles/Day5.dir/flags.make
CMakeFiles/Day5.dir/src/power_recursive.cpp.o: ../src/power_recursive.cpp
CMakeFiles/Day5.dir/src/power_recursive.cpp.o: CMakeFiles/Day5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nhomnhom0/learn_Cpp/Day5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Day5.dir/src/power_recursive.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Day5.dir/src/power_recursive.cpp.o -MF CMakeFiles/Day5.dir/src/power_recursive.cpp.o.d -o CMakeFiles/Day5.dir/src/power_recursive.cpp.o -c /home/nhomnhom0/learn_Cpp/Day5/src/power_recursive.cpp

CMakeFiles/Day5.dir/src/power_recursive.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Day5.dir/src/power_recursive.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nhomnhom0/learn_Cpp/Day5/src/power_recursive.cpp > CMakeFiles/Day5.dir/src/power_recursive.cpp.i

CMakeFiles/Day5.dir/src/power_recursive.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Day5.dir/src/power_recursive.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nhomnhom0/learn_Cpp/Day5/src/power_recursive.cpp -o CMakeFiles/Day5.dir/src/power_recursive.cpp.s

CMakeFiles/Day5.dir/src/menu.cpp.o: CMakeFiles/Day5.dir/flags.make
CMakeFiles/Day5.dir/src/menu.cpp.o: ../src/menu.cpp
CMakeFiles/Day5.dir/src/menu.cpp.o: CMakeFiles/Day5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nhomnhom0/learn_Cpp/Day5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Day5.dir/src/menu.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Day5.dir/src/menu.cpp.o -MF CMakeFiles/Day5.dir/src/menu.cpp.o.d -o CMakeFiles/Day5.dir/src/menu.cpp.o -c /home/nhomnhom0/learn_Cpp/Day5/src/menu.cpp

CMakeFiles/Day5.dir/src/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Day5.dir/src/menu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nhomnhom0/learn_Cpp/Day5/src/menu.cpp > CMakeFiles/Day5.dir/src/menu.cpp.i

CMakeFiles/Day5.dir/src/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Day5.dir/src/menu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nhomnhom0/learn_Cpp/Day5/src/menu.cpp -o CMakeFiles/Day5.dir/src/menu.cpp.s

# Object files for target Day5
Day5_OBJECTS = \
"CMakeFiles/Day5.dir/main.cpp.o" \
"CMakeFiles/Day5.dir/src/perimeter.cpp.o" \
"CMakeFiles/Day5.dir/src/divide.cpp.o" \
"CMakeFiles/Day5.dir/src/power_recursive.cpp.o" \
"CMakeFiles/Day5.dir/src/menu.cpp.o"

# External object files for target Day5
Day5_EXTERNAL_OBJECTS =

Day5: CMakeFiles/Day5.dir/main.cpp.o
Day5: CMakeFiles/Day5.dir/src/perimeter.cpp.o
Day5: CMakeFiles/Day5.dir/src/divide.cpp.o
Day5: CMakeFiles/Day5.dir/src/power_recursive.cpp.o
Day5: CMakeFiles/Day5.dir/src/menu.cpp.o
Day5: CMakeFiles/Day5.dir/build.make
Day5: CMakeFiles/Day5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nhomnhom0/learn_Cpp/Day5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Day5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Day5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Day5.dir/build: Day5
.PHONY : CMakeFiles/Day5.dir/build

CMakeFiles/Day5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Day5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Day5.dir/clean

CMakeFiles/Day5.dir/depend:
	cd /home/nhomnhom0/learn_Cpp/Day5/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nhomnhom0/learn_Cpp/Day5 /home/nhomnhom0/learn_Cpp/Day5 /home/nhomnhom0/learn_Cpp/Day5/build /home/nhomnhom0/learn_Cpp/Day5/build /home/nhomnhom0/learn_Cpp/Day5/build/CMakeFiles/Day5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Day5.dir/depend

