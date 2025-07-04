;; Auto-generated. Do not edit!


(when (boundp 'turtlebot_calibration::ScanAngle)
  (if (not (find-package "TURTLEBOT_CALIBRATION"))
    (make-package "TURTLEBOT_CALIBRATION"))
  (shadow 'ScanAngle (find-package "TURTLEBOT_CALIBRATION")))
(unless (find-package "TURTLEBOT_CALIBRATION::SCANANGLE")
  (make-package "TURTLEBOT_CALIBRATION::SCANANGLE"))

(in-package "ROS")
;;//! \htmlinclude ScanAngle.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass turtlebot_calibration::ScanAngle
  :super ros::object
  :slots (_header _scan_angle ))

(defmethod turtlebot_calibration::ScanAngle
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:scan_angle __scan_angle) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _scan_angle (float __scan_angle))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:scan_angle
   (&optional __scan_angle)
   (if __scan_angle (setq _scan_angle __scan_angle)) _scan_angle)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float64 _scan_angle
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float64 _scan_angle
       (sys::poke _scan_angle (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float64 _scan_angle
     (setq _scan_angle (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get turtlebot_calibration::ScanAngle :md5sum-) "06e2c839dc5c7f5c13ac09a8b4ff0a6a")
(setf (get turtlebot_calibration::ScanAngle :datatype-) "turtlebot_calibration/ScanAngle")
(setf (get turtlebot_calibration::ScanAngle :definition-)
      "Header header
float64 scan_angle
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :turtlebot_calibration/ScanAngle "06e2c839dc5c7f5c13ac09a8b4ff0a6a")


