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
CMAKE_SOURCE_DIR = /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0

# Include any dependencies generated for this target.
include plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/depend.make

# Include the progress variables for this target.
include plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/flags.make

plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/syslog_plugin.c.o: plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/flags.make
plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/syslog_plugin.c.o: plugins/syslog/syslog_plugin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/syslog_plugin.c.o"
	cd /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/plugins/syslog && ccache /home/qemu-sgx/devel/optee/out-br/host/bin/arm-linux-gnueabihf-gcc --sysroot=/home/qemu-sgx/devel/optee/out-br/host/arm-buildroot-linux-gnueabihf/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/syslog_plugin.c.o   -c /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/plugins/syslog/syslog_plugin.c

plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/syslog_plugin.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/syslog_plugin.c.i"
	cd /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/plugins/syslog && /home/qemu-sgx/devel/optee/out-br/host/bin/arm-linux-gnueabihf-gcc --sysroot=/home/qemu-sgx/devel/optee/out-br/host/arm-buildroot-linux-gnueabihf/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/plugins/syslog/syslog_plugin.c > CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/syslog_plugin.c.i

plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/syslog_plugin.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/syslog_plugin.c.s"
	cd /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/plugins/syslog && /home/qemu-sgx/devel/optee/out-br/host/bin/arm-linux-gnueabihf-gcc --sysroot=/home/qemu-sgx/devel/optee/out-br/host/arm-buildroot-linux-gnueabihf/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/plugins/syslog/syslog_plugin.c -o CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/syslog_plugin.c.s

# Object files for target 96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin
96bcf744__4f72__4866__bf1d__8634fd9c65e5_plugin_OBJECTS = \
"CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/syslog_plugin.c.o"

# External object files for target 96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin
96bcf744__4f72__4866__bf1d__8634fd9c65e5_plugin_EXTERNAL_OBJECTS =

plugins/syslog/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.so: plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/syslog_plugin.c.o
plugins/syslog/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.so: plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/build.make
plugins/syslog/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.so: plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library 96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.so"
	cd /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/plugins/syslog && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/build: plugins/syslog/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.so

.PHONY : plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/build

plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/clean:
	cd /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/plugins/syslog && $(CMAKE_COMMAND) -P CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/cmake_clean.cmake
.PHONY : plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/clean

plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/depend:
	cd /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0 /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/plugins/syslog /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0 /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/plugins/syslog /home/qemu-sgx/devel/optee/out-br/build/optee_examples_ext-1.0/plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/DependInfo.cmake
.PHONY : plugins/syslog/CMakeFiles/96bcf744-4f72-4866-bf1d-8634fd9c65e5.plugin.dir/depend
