# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;pluginlib;nodelet;dynamic_reconfigure;geometry_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lyocs_cmd_vel_mux_nodelet;-lyaml-cpp".split(';') if "-lyocs_cmd_vel_mux_nodelet;-lyaml-cpp" != "" else []
PROJECT_NAME = "yocs_cmd_vel_mux"
PROJECT_SPACE_DIR = "/home/ubuntuber/ros_se/install"
PROJECT_VERSION = "0.12.1"
