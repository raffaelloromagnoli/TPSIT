# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Scuola\TPSIT\ES_C\ES005_Rubrica

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Scuola\TPSIT\ES_C\ES005_Rubrica\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ES005_Rubrica.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ES005_Rubrica.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ES005_Rubrica.dir/flags.make

CMakeFiles/ES005_Rubrica.dir/main.c.obj: CMakeFiles/ES005_Rubrica.dir/flags.make
CMakeFiles/ES005_Rubrica.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Scuola\TPSIT\ES_C\ES005_Rubrica\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ES005_Rubrica.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ES005_Rubrica.dir\main.c.obj   -c D:\Scuola\TPSIT\ES_C\ES005_Rubrica\main.c

CMakeFiles/ES005_Rubrica.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ES005_Rubrica.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Scuola\TPSIT\ES_C\ES005_Rubrica\main.c > CMakeFiles\ES005_Rubrica.dir\main.c.i

CMakeFiles/ES005_Rubrica.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ES005_Rubrica.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Scuola\TPSIT\ES_C\ES005_Rubrica\main.c -o CMakeFiles\ES005_Rubrica.dir\main.c.s

# Object files for target ES005_Rubrica
ES005_Rubrica_OBJECTS = \
"CMakeFiles/ES005_Rubrica.dir/main.c.obj"

# External object files for target ES005_Rubrica
ES005_Rubrica_EXTERNAL_OBJECTS =

ES005_Rubrica.exe: CMakeFiles/ES005_Rubrica.dir/main.c.obj
ES005_Rubrica.exe: CMakeFiles/ES005_Rubrica.dir/build.make
ES005_Rubrica.exe: CMakeFiles/ES005_Rubrica.dir/linklibs.rsp
ES005_Rubrica.exe: CMakeFiles/ES005_Rubrica.dir/objects1.rsp
ES005_Rubrica.exe: CMakeFiles/ES005_Rubrica.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Scuola\TPSIT\ES_C\ES005_Rubrica\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ES005_Rubrica.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ES005_Rubrica.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ES005_Rubrica.dir/build: ES005_Rubrica.exe

.PHONY : CMakeFiles/ES005_Rubrica.dir/build

CMakeFiles/ES005_Rubrica.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ES005_Rubrica.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ES005_Rubrica.dir/clean

CMakeFiles/ES005_Rubrica.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Scuola\TPSIT\ES_C\ES005_Rubrica D:\Scuola\TPSIT\ES_C\ES005_Rubrica D:\Scuola\TPSIT\ES_C\ES005_Rubrica\cmake-build-debug D:\Scuola\TPSIT\ES_C\ES005_Rubrica\cmake-build-debug D:\Scuola\TPSIT\ES_C\ES005_Rubrica\cmake-build-debug\CMakeFiles\ES005_Rubrica.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ES005_Rubrica.dir/depend

