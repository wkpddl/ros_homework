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
CMAKE_SOURCE_DIR = /home/ubuntuber/ros_se/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntuber/ros_se/build

# Utility rule file for freenect_camera_gencfg.

# Include the progress variables for this target.
include freenect_stack/freenect_camera/CMakeFiles/freenect_camera_gencfg.dir/progress.make

freenect_stack/freenect_camera/CMakeFiles/freenect_camera_gencfg: /home/ubuntuber/ros_se/devel/include/freenect_camera/FreenectConfig.h
freenect_stack/freenect_camera/CMakeFiles/freenect_camera_gencfg: /home/ubuntuber/ros_se/devel/lib/python3/dist-packages/freenect_camera/cfg/FreenectConfig.py


/home/ubuntuber/ros_se/devel/include/freenect_camera/FreenectConfig.h: /home/ubuntuber/ros_se/src/freenect_stack/freenect_camera/cfg/Freenect.cfg
/home/ubuntuber/ros_se/devel/include/freenect_camera/FreenectConfig.h: /opt/ros/noetic/share/dynamic_reconfigure/templates/ConfigType.py.template
/home/ubuntuber/ros_se/devel/include/freenect_camera/FreenectConfig.h: /opt/ros/noetic/share/dynamic_reconfigure/templates/ConfigType.h.template
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntuber/ros_se/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating dynamic reconfigure files from cfg/Freenect.cfg: /home/ubuntuber/ros_se/devel/include/freenect_camera/FreenectConfig.h /home/ubuntuber/ros_se/devel/lib/python3/dist-packages/freenect_camera/cfg/FreenectConfig.py"
	cd /home/ubuntuber/ros_se/build/freenect_stack/freenect_camera && ../../catkin_generated/env_cached.sh /home/ubuntuber/ros_se/build/freenect_stack/freenect_camera/setup_custom_pythonpath.sh /home/ubuntuber/ros_se/src/freenect_stack/freenect_camera/cfg/Freenect.cfg /opt/ros/noetic/share/dynamic_reconfigure/cmake/.. /home/ubuntuber/ros_se/devel/share/freenect_camera /home/ubuntuber/ros_se/devel/include/freenect_camera /home/ubuntuber/ros_se/devel/lib/python3/dist-packages/freenect_camera

/home/ubuntuber/ros_se/devel/share/freenect_camera/docs/FreenectConfig.dox: /home/ubuntuber/ros_se/devel/include/freenect_camera/FreenectConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/ubuntuber/ros_se/devel/share/freenect_camera/docs/FreenectConfig.dox

/home/ubuntuber/ros_se/devel/share/freenect_camera/docs/FreenectConfig-usage.dox: /home/ubuntuber/ros_se/devel/include/freenect_camera/FreenectConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/ubuntuber/ros_se/devel/share/freenect_camera/docs/FreenectConfig-usage.dox

/home/ubuntuber/ros_se/devel/lib/python3/dist-packages/freenect_camera/cfg/FreenectConfig.py: /home/ubuntuber/ros_se/devel/include/freenect_camera/FreenectConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/ubuntuber/ros_se/devel/lib/python3/dist-packages/freenect_camera/cfg/FreenectConfig.py

/home/ubuntuber/ros_se/devel/share/freenect_camera/docs/FreenectConfig.wikidoc: /home/ubuntuber/ros_se/devel/include/freenect_camera/FreenectConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/ubuntuber/ros_se/devel/share/freenect_camera/docs/FreenectConfig.wikidoc

freenect_camera_gencfg: freenect_stack/freenect_camera/CMakeFiles/freenect_camera_gencfg
freenect_camera_gencfg: /home/ubuntuber/ros_se/devel/include/freenect_camera/FreenectConfig.h
freenect_camera_gencfg: /home/ubuntuber/ros_se/devel/share/freenect_camera/docs/FreenectConfig.dox
freenect_camera_gencfg: /home/ubuntuber/ros_se/devel/share/freenect_camera/docs/FreenectConfig-usage.dox
freenect_camera_gencfg: /home/ubuntuber/ros_se/devel/lib/python3/dist-packages/freenect_camera/cfg/FreenectConfig.py
freenect_camera_gencfg: /home/ubuntuber/ros_se/devel/share/freenect_camera/docs/FreenectConfig.wikidoc
freenect_camera_gencfg: freenect_stack/freenect_camera/CMakeFiles/freenect_camera_gencfg.dir/build.make

.PHONY : freenect_camera_gencfg

# Rule to build all files generated by this target.
freenect_stack/freenect_camera/CMakeFiles/freenect_camera_gencfg.dir/build: freenect_camera_gencfg

.PHONY : freenect_stack/freenect_camera/CMakeFiles/freenect_camera_gencfg.dir/build

freenect_stack/freenect_camera/CMakeFiles/freenect_camera_gencfg.dir/clean:
	cd /home/ubuntuber/ros_se/build/freenect_stack/freenect_camera && $(CMAKE_COMMAND) -P CMakeFiles/freenect_camera_gencfg.dir/cmake_clean.cmake
.PHONY : freenect_stack/freenect_camera/CMakeFiles/freenect_camera_gencfg.dir/clean

freenect_stack/freenect_camera/CMakeFiles/freenect_camera_gencfg.dir/depend:
	cd /home/ubuntuber/ros_se/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntuber/ros_se/src /home/ubuntuber/ros_se/src/freenect_stack/freenect_camera /home/ubuntuber/ros_se/build /home/ubuntuber/ros_se/build/freenect_stack/freenect_camera /home/ubuntuber/ros_se/build/freenect_stack/freenect_camera/CMakeFiles/freenect_camera_gencfg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : freenect_stack/freenect_camera/CMakeFiles/freenect_camera_gencfg.dir/depend

