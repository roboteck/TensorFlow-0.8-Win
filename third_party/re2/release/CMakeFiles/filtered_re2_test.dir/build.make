# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Applications\CMake\bin\cmake.exe

# The command to remove a file.
RM = D:\Applications\CMake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\cmakeTF\tensorflow0.8\third_party\re2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\cmakeTF\tensorflow0.8\third_party\re2\release

# Include any dependencies generated for this target.
include CMakeFiles\filtered_re2_test.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\filtered_re2_test.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\filtered_re2_test.dir\flags.make

CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj: CMakeFiles\filtered_re2_test.dir\flags.make
CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj: ..\re2\testing\filtered_re2_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\cmakeTF\tensorflow0.8\third_party\re2\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/filtered_re2_test.dir/re2/testing/filtered_re2_test.cc.obj"
	C:\PROGRA~2\MICROS~3.0\VC\bin\amd64\cl.exe  @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj /FdCMakeFiles\filtered_re2_test.dir\ /FS -c D:\cmakeTF\tensorflow0.8\third_party\re2\re2\testing\filtered_re2_test.cc
<<

CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/filtered_re2_test.dir/re2/testing/filtered_re2_test.cc.i"
	C:\PROGRA~2\MICROS~3.0\VC\bin\amd64\cl.exe  > CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\cmakeTF\tensorflow0.8\third_party\re2\re2\testing\filtered_re2_test.cc
<<

CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/filtered_re2_test.dir/re2/testing/filtered_re2_test.cc.s"
	C:\PROGRA~2\MICROS~3.0\VC\bin\amd64\cl.exe  @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.s /c D:\cmakeTF\tensorflow0.8\third_party\re2\re2\testing\filtered_re2_test.cc
<<

CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj.requires:

.PHONY : CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj.requires

CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj.provides: CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj.requires
	$(MAKE) -f CMakeFiles\filtered_re2_test.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj.provides.build
.PHONY : CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj.provides

CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj.provides.build: CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj


# Object files for target filtered_re2_test
filtered_re2_test_OBJECTS = \
"CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj"

# External object files for target filtered_re2_test
filtered_re2_test_EXTERNAL_OBJECTS =

filtered_re2_test.exe: CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj
filtered_re2_test.exe: CMakeFiles\filtered_re2_test.dir\build.make
filtered_re2_test.exe: test.lib
filtered_re2_test.exe: re2.lib
filtered_re2_test.exe: CMakeFiles\filtered_re2_test.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\cmakeTF\tensorflow0.8\third_party\re2\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable filtered_re2_test.exe"
	D:\Applications\CMake\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\filtered_re2_test.dir --manifests  -- C:\PROGRA~2\MICROS~3.0\VC\bin\amd64\link.exe /nologo @CMakeFiles\filtered_re2_test.dir\objects1.rsp @<<
 /out:filtered_re2_test.exe /implib:filtered_re2_test.lib /pdb:D:\cmakeTF\tensorflow0.8\third_party\re2\release\filtered_re2_test.pdb /version:0.0   /machine:x64 /INCREMENTAL:NO /subsystem:console  test.lib re2.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\filtered_re2_test.dir\build: filtered_re2_test.exe

.PHONY : CMakeFiles\filtered_re2_test.dir\build

CMakeFiles\filtered_re2_test.dir\requires: CMakeFiles\filtered_re2_test.dir\re2\testing\filtered_re2_test.cc.obj.requires

.PHONY : CMakeFiles\filtered_re2_test.dir\requires

CMakeFiles\filtered_re2_test.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\filtered_re2_test.dir\cmake_clean.cmake
.PHONY : CMakeFiles\filtered_re2_test.dir\clean

CMakeFiles\filtered_re2_test.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\cmakeTF\tensorflow0.8\third_party\re2 D:\cmakeTF\tensorflow0.8\third_party\re2 D:\cmakeTF\tensorflow0.8\third_party\re2\release D:\cmakeTF\tensorflow0.8\third_party\re2\release D:\cmakeTF\tensorflow0.8\third_party\re2\release\CMakeFiles\filtered_re2_test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\filtered_re2_test.dir\depend
