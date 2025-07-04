
(cl:in-package :asdf)

(defsystem "dynamixel_controllers-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "RestartController" :depends-on ("_package_RestartController"))
    (:file "_package_RestartController" :depends-on ("_package"))
    (:file "SetComplianceMargin" :depends-on ("_package_SetComplianceMargin"))
    (:file "_package_SetComplianceMargin" :depends-on ("_package"))
    (:file "SetCompliancePunch" :depends-on ("_package_SetCompliancePunch"))
    (:file "_package_SetCompliancePunch" :depends-on ("_package"))
    (:file "SetComplianceSlope" :depends-on ("_package_SetComplianceSlope"))
    (:file "_package_SetComplianceSlope" :depends-on ("_package"))
    (:file "SetSpeed" :depends-on ("_package_SetSpeed"))
    (:file "_package_SetSpeed" :depends-on ("_package"))
    (:file "SetTorqueLimit" :depends-on ("_package_SetTorqueLimit"))
    (:file "_package_SetTorqueLimit" :depends-on ("_package"))
    (:file "StartController" :depends-on ("_package_StartController"))
    (:file "_package_StartController" :depends-on ("_package"))
    (:file "StopController" :depends-on ("_package_StopController"))
    (:file "_package_StopController" :depends-on ("_package"))
    (:file "TorqueEnable" :depends-on ("_package_TorqueEnable"))
    (:file "_package_TorqueEnable" :depends-on ("_package"))
  ))