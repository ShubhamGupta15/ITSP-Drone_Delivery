;; Auto-generated. Do not edit!


(when (boundp 'offb::WpList)
  (if (not (find-package "OFFB"))
    (make-package "OFFB"))
  (shadow 'WpList (find-package "OFFB")))
(unless (find-package "OFFB::WPLIST")
  (make-package "OFFB::WPLIST"))

(in-package "ROS")
;;//! \htmlinclude WpList.msg.html


(defclass offb::WpList
  :super ros::object
  :slots (_wpList ))

(defmethod offb::WpList
  (:init
   (&key
    ((:wpList __wpList) (let (r) (dotimes (i 0) (push (instance offb::Waypoint :init) r)) r))
    )
   (send-super :init)
   (setq _wpList __wpList)
   self)
  (:wpList
   (&rest __wpList)
   (if (keywordp (car __wpList))
       (send* _wpList __wpList)
     (progn
       (if __wpList (setq _wpList (car __wpList)))
       _wpList)))
  (:serialization-length
   ()
   (+
    ;; offb/Waypoint[] _wpList
    (apply #'+ (send-all _wpList :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; offb/Waypoint[] _wpList
     (write-long (length _wpList) s)
     (dolist (elem _wpList)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; offb/Waypoint[] _wpList
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _wpList (let (r) (dotimes (i n) (push (instance offb::Waypoint :init) r)) r))
     (dolist (elem- _wpList)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get offb::WpList :md5sum-) "57a0d486fa524923c4fc169d083620b1")
(setf (get offb::WpList :datatype-) "offb/WpList")
(setf (get offb::WpList :definition-)
      "offb/Waypoint[] wpList

================================================================================
MSG: offb/Waypoint
# Waypoint.msg
#
# ROS representation of MAVLink MISSION_ITEM
# See mavlink documentation



# see enum MAV_FRAME
uint8 frame
uint8 FRAME_GLOBAL = 0
uint8 FRAME_LOCAL_NED = 1
uint8 FRAME_MISSION = 2
uint8 FRAME_GLOBAL_REL_ALT = 3
uint8 FRAME_LOCAL_ENU = 4

# see enum MAV_CMD and CommandCode.msg
uint16 command

bool is_current
bool autocontinue
# meaning of this params described in enum MAV_CMD
float32 param1
float32 param2
float32 param3
float32 param4
float64 x_lat
float64 y_long
float64 z_alt

")



(provide :offb/WpList "57a0d486fa524923c4fc169d083620b1")


