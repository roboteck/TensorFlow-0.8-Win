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
include CMakeFiles\exhaustive_test.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\exhaustive_test.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\exhaustive_test.dir\flags.make

CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj: CMakeFiles\exhaustive_test.dir\flags.make
CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj: ..\re2\testing\exhaustive_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\cmakeTF\tensorflow0.8\third_party\re2\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exhaustive_test.dir/re2/testing/exhaustive_test.cc.obj"
	C:\PROGRA~2\MICROS~3.0\VC\bin\amd64\cl.exe  @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj /FdCMakeFiles\exhaustive_test.dir\ /FS -c D:\cmakeTF\tensorflow0.8\third_party\re2\re2\testing\exhaustive_test.cc
<<

CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exhaustive_test.dir/re2/testing/exhaustive_test.cc.i"
	C:\PROGRA~2\MICROS~3.0\VC\bin\amd64\cl.exe  > CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\cmakeTF\tensorflow0.8\third_party\re2\re2\testing\exhaustive_test.cc
<<

CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exhaustive_test.dir/re2/testing/exhaustive_test.cc.s"
	C:\PROGRA~2\MICROS~3.0\VC\bin\amd64\cl.exe  @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.s /c D:\cmakeTF\tensorflow0.8\third_party\re2\re2\testing\exhaustive_test.cc
<<

CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj.requires:

.PHONY : CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj.requires

CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj.provides: CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj.requires
	$(MAKE) -f CMakeFiles\exhaustive_test.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj.provides.build
.PHONY : CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj.provides

CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj.provides.build: CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj


# Object files for target exhaustive_test
exhaustive_test_OBJECTS = \
"CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj"

# External object files for target exhaustive_test
exhaustive_test_EXTERNAL_OBJECTS =

exhaustive_test.exe: CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj
exhaustive_test.exe: CMakeFiles\exhaustive_test.dir\build.make
exhaustive_test.exe: test.lib
exhaustive_test.exe: re2.lib
exhaustive_test.exe: CMakeFiles\exhaustive_test.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\cmakeTF\tensorflow0.8\third_party\re2\release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exhaustive_test.exe"
	D:\Applications\CMake\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\exhaustive_test.dir --manifests  -- C:\PROGRA~2\MICROS~3.0\VC\bin\amd64\link.exe /nologo @CMakeFiles\exhaustive_test.dir\objects1.rsp @<<
 /out:exhaustive_test.exe /implib:exhaustive_test.lib /pdb:D:\cmakeTF\tensorflow0.8\third_party\re2\release\exhaustive_test.pdb /version:0.0   /machine:x64 /INCREMENTAL:NO /subsystem:console  test.lib re2.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\exhaustive_test.dir\build: exhaustive_test.exe

.PHONY : CMakeFiles\exhaustive_test.dir\build

CMakeFiles\exhaustive_test.dir\requires: CMakeFiles\exhaustive_test.dir\re2\testing\exhaustive_test.cc.obj.requires

.PHONY : CMakeFiles\exhaustive_test.dir\requires

CMakeFiles\exhaustive_test.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\exhaustive_test.dir\cmake_clean.cmake
.PHONY : CMakeFiles\exhaustive_test.dir\clean

CMakeFiles\exhaustive_test.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\cmakeTF\tensorflow0.8\third_party\re2 D:\cmakeTF\tensorflow0.8\third_party\re2 D:\cmakeTF\tensorflow0.8\third_party\re2\release D:\cmakeTF\tensorflow0.8\third_party\re2\release D:\cmakeTF\tensorflow0.8\third_party\re2\release\CMakeFiles\exhaustive_test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\exhaustive_test.dir\depend

