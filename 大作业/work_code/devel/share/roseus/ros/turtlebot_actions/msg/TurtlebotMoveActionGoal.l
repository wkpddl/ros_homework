;; Auto-generated. Do not edit!


(when (boundp 'turtlebot_actions::TurtlebotMoveActionGoal)
  (if (not (find-package "TURTLEBOT_ACTIONS"))
    (make-package "TURTLEBOT_ACTIONS"))
  (shadow 'TurtlebotMoveActionGoal (find-package "TURTLEBOT_ACTIONS")))
(unless (find-package "TURTLEBOT_ACTIONS::TURTLEBOTMOVEACTIONGOAL")
  (make-package "TURTLEBOT_ACTIONS::TURTLEBOTMOVEACTIONGOAL"))

(in-package "ROS")
;;//! \htmlinclude TurtlebotMoveActionGoal.msg.html
(if (not (find-package "ACTIONLIB_MSGS"))
  (ros::roseus-add-msgs "actionlib_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass turtlebot_actions::TurtlebotMoveActionGoal
  :super ros::object
  :slots (_header _goal_id _goal ))

(defmethod turtlebot_actions::TurtlebotMoveActionGoal
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:goal_id __goal_id) (instance actionlib_msgs::GoalID :init))
    ((:goal __goal) (instance turtlebot_actions::TurtlebotMoveGoal :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _goal_id __goal_id)
   (setq _goal __goal)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:goal_id
   (&rest __goal_id)
   (if (keywordp (car __goal_id))
       (send* _goal_id __goal_id)
     (progn
       (if __goal_id (setq _goal_id (car __goal_id)))
       _goal_id)))
  (:goal
   (&rest __goal)
   (if (keywordp (car __goal))
       (send* _goal __goal)
     (progn
       (if __goal (setq _goal (car __goal)))
       _goal)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; actionlib_msgs/GoalID _goal_id
    (send _goal_id :serialization-length)
    ;; turtlebot_actions/TurtlebotMoveGoal _goal
    (send _goal :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; actionlib_msgs/GoalID _goal_id
       (send _goal_id :serialize s)
     ;; turtlebot_actions/TurtlebotMoveGoal _goal
       (send _goal :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; actionlib_msgs/GoalID _goal_id
     (send _goal_id :deserialize buf ptr-) (incf ptr- (send _goal_id :serialization-length))
   ;; turtlebot_actions/TurtlebotMoveGoal _goal
     (send _goal :deserialize buf ptr-) (incf ptr- (send _goal :serialization-length))
   ;;
   self)
  )

(setf (get turtlebot_actions::TurtlebotMoveActionGoal :md5sum-) "7e462cf7fe57fc76afd36fde5d415bc1")
(setf (get turtlebot_actions::TurtlebotMoveActionGoal :datatype-) "turtlebot_actions/TurtlebotMoveActionGoal")
(setf (get turtlebot_actions::TurtlebotMoveActionGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalID goal_id
TurtlebotMoveGoal goal

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

================================================================================
MSG: actionlib_msgs/GoalID
# The stamp should store the time at which this goal was requested.
# It is used by an action server when it tries to preempt all
# goals that were requested before a certain time
time stamp

# The id provides a way to associate feedback and
# result message with specific goal requests. The id
# specified must be unique.
string id


================================================================================
MSG: turtlebot_actions/TurtlebotMoveGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#goal definition
float32 turn_distance     # in radians, ccw = +, cw = -
float32 forward_distance  # in meters, forward = +, backward = -

")



(provide :turtlebot_actions/TurtlebotMoveActionGoal "7e462cf7fe57fc76afd36fde5d415bc1")


