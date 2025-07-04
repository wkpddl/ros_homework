;; Auto-generated. Do not edit!


(when (boundp 'dynamixel_controllers::StartController)
  (if (not (find-package "DYNAMIXEL_CONTROLLERS"))
    (make-package "DYNAMIXEL_CONTROLLERS"))
  (shadow 'StartController (find-package "DYNAMIXEL_CONTROLLERS")))
(unless (find-package "DYNAMIXEL_CONTROLLERS::STARTCONTROLLER")
  (make-package "DYNAMIXEL_CONTROLLERS::STARTCONTROLLER"))
(unless (find-package "DYNAMIXEL_CONTROLLERS::STARTCONTROLLERREQUEST")
  (make-package "DYNAMIXEL_CONTROLLERS::STARTCONTROLLERREQUEST"))
(unless (find-package "DYNAMIXEL_CONTROLLERS::STARTCONTROLLERRESPONSE")
  (make-package "DYNAMIXEL_CONTROLLERS::STARTCONTROLLERRESPONSE"))

(in-package "ROS")





(defclass dynamixel_controllers::StartControllerRequest
  :super ros::object
  :slots (_port_name _package_path _module_name _class_name _controller_name _dependencies ))

(defmethod dynamixel_controllers::StartControllerRequest
  (:init
   (&key
    ((:port_name __port_name) "")
    ((:package_path __package_path) "")
    ((:module_name __module_name) "")
    ((:class_name __class_name) "")
    ((:controller_name __controller_name) "")
    ((:dependencies __dependencies) (let (r) (dotimes (i 0) (push "" r)) r))
    )
   (send-super :init)
   (setq _port_name (string __port_name))
   (setq _package_path (string __package_path))
   (setq _module_name (string __module_name))
   (setq _class_name (string __class_name))
   (setq _controller_name (string __controller_name))
   (setq _dependencies __dependencies)
   self)
  (:port_name
   (&optional __port_name)
   (if __port_name (setq _port_name __port_name)) _port_name)
  (:package_path
   (&optional __package_path)
   (if __package_path (setq _package_path __package_path)) _package_path)
  (:module_name
   (&optional __module_name)
   (if __module_name (setq _module_name __module_name)) _module_name)
  (:class_name
   (&optional __class_name)
   (if __class_name (setq _class_name __class_name)) _class_name)
  (:controller_name
   (&optional __controller_name)
   (if __controller_name (setq _controller_name __controller_name)) _controller_name)
  (:dependencies
   (&optional __dependencies)
   (if __dependencies (setq _dependencies __dependencies)) _dependencies)
  (:serialization-length
   ()
   (+
    ;; string _port_name
    4 (length _port_name)
    ;; string _package_path
    4 (length _package_path)
    ;; string _module_name
    4 (length _module_name)
    ;; string _class_name
    4 (length _class_name)
    ;; string _controller_name
    4 (length _controller_name)
    ;; string[] _dependencies
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _dependencies)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _port_name
       (write-long (length _port_name) s) (princ _port_name s)
     ;; string _package_path
       (write-long (length _package_path) s) (princ _package_path s)
     ;; string _module_name
       (write-long (length _module_name) s) (princ _module_name s)
     ;; string _class_name
       (write-long (length _class_name) s) (princ _class_name s)
     ;; string _controller_name
       (write-long (length _controller_name) s) (princ _controller_name s)
     ;; string[] _dependencies
     (write-long (length _dependencies) s)
     (dolist (elem _dependencies)
       (write-long (length elem) s) (princ elem s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _port_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _port_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _package_path
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _package_path (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _module_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _module_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _class_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _class_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _controller_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _controller_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string[] _dependencies
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _dependencies (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _dependencies i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;;
   self)
  )

(defclass dynamixel_controllers::StartControllerResponse
  :super ros::object
  :slots (_success _reason ))

(defmethod dynamixel_controllers::StartControllerResponse
  (:init
   (&key
    ((:success __success) nil)
    ((:reason __reason) "")
    )
   (send-super :init)
   (setq _success __success)
   (setq _reason (string __reason))
   self)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:reason
   (&optional __reason)
   (if __reason (setq _reason __reason)) _reason)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ;; string _reason
    4 (length _reason)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;; string _reason
       (write-long (length _reason) s) (princ _reason s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _reason
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _reason (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass dynamixel_controllers::StartController
  :super ros::object
  :slots ())

(setf (get dynamixel_controllers::StartController :md5sum-) "94c76c2df56346fcaa2611bdac54f434")
(setf (get dynamixel_controllers::StartController :datatype-) "dynamixel_controllers/StartController")
(setf (get dynamixel_controllers::StartController :request) dynamixel_controllers::StartControllerRequest)
(setf (get dynamixel_controllers::StartController :response) dynamixel_controllers::StartControllerResponse)

(defmethod dynamixel_controllers::StartControllerRequest
  (:response () (instance dynamixel_controllers::StartControllerResponse :init)))

(setf (get dynamixel_controllers::StartControllerRequest :md5sum-) "94c76c2df56346fcaa2611bdac54f434")
(setf (get dynamixel_controllers::StartControllerRequest :datatype-) "dynamixel_controllers/StartControllerRequest")
(setf (get dynamixel_controllers::StartControllerRequest :definition-)
      "string port_name            # serial port that this controller is connected to
string package_path         # path to ROS package containing controller module
string module_name          # name of the controller module within that package
string class_name           # controller class name within that module
string controller_name      # path to controller config parameters on param server
string[] dependencies       # optional, list names of all controllers this controller depends on
---
bool success
string reason

")

(setf (get dynamixel_controllers::StartControllerResponse :md5sum-) "94c76c2df56346fcaa2611bdac54f434")
(setf (get dynamixel_controllers::StartControllerResponse :datatype-) "dynamixel_controllers/StartControllerResponse")
(setf (get dynamixel_controllers::StartControllerResponse :definition-)
      "string port_name            # serial port that this controller is connected to
string package_path         # path to ROS package containing controller module
string module_name          # name of the controller module within that package
string class_name           # controller class name within that module
string controller_name      # path to controller config parameters on param server
string[] dependencies       # optional, list names of all controllers this controller depends on
---
bool success
string reason

")



(provide :dynamixel_controllers/StartController "94c76c2df56346fcaa2611bdac54f434")


