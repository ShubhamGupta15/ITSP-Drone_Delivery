; Auto-generated. Do not edit!


(cl:in-package offb-msg)


;//! \htmlinclude WpList.msg.html

(cl:defclass <WpList> (roslisp-msg-protocol:ros-message)
  ((wpList
    :reader wpList
    :initarg :wpList
    :type (cl:vector offb-msg:Waypoint)
   :initform (cl:make-array 0 :element-type 'offb-msg:Waypoint :initial-element (cl:make-instance 'offb-msg:Waypoint))))
)

(cl:defclass WpList (<WpList>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <WpList>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'WpList)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name offb-msg:<WpList> is deprecated: use offb-msg:WpList instead.")))

(cl:ensure-generic-function 'wpList-val :lambda-list '(m))
(cl:defmethod wpList-val ((m <WpList>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader offb-msg:wpList-val is deprecated.  Use offb-msg:wpList instead.")
  (wpList m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <WpList>) ostream)
  "Serializes a message object of type '<WpList>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'wpList))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'wpList))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <WpList>) istream)
  "Deserializes a message object of type '<WpList>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'wpList) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'wpList)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'offb-msg:Waypoint))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<WpList>)))
  "Returns string type for a message object of type '<WpList>"
  "offb/WpList")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'WpList)))
  "Returns string type for a message object of type 'WpList"
  "offb/WpList")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<WpList>)))
  "Returns md5sum for a message object of type '<WpList>"
  "57a0d486fa524923c4fc169d083620b1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'WpList)))
  "Returns md5sum for a message object of type 'WpList"
  "57a0d486fa524923c4fc169d083620b1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<WpList>)))
  "Returns full string definition for message of type '<WpList>"
  (cl:format cl:nil "offb/Waypoint[] wpList~%~%================================================================================~%MSG: offb/Waypoint~%# Waypoint.msg~%#~%# ROS representation of MAVLink MISSION_ITEM~%# See mavlink documentation~%~%~%~%# see enum MAV_FRAME~%uint8 frame~%uint8 FRAME_GLOBAL = 0~%uint8 FRAME_LOCAL_NED = 1~%uint8 FRAME_MISSION = 2~%uint8 FRAME_GLOBAL_REL_ALT = 3~%uint8 FRAME_LOCAL_ENU = 4~%~%# see enum MAV_CMD and CommandCode.msg~%uint16 command~%~%bool is_current~%bool autocontinue~%# meaning of this params described in enum MAV_CMD~%float32 param1~%float32 param2~%float32 param3~%float32 param4~%float64 x_lat~%float64 y_long~%float64 z_alt~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'WpList)))
  "Returns full string definition for message of type 'WpList"
  (cl:format cl:nil "offb/Waypoint[] wpList~%~%================================================================================~%MSG: offb/Waypoint~%# Waypoint.msg~%#~%# ROS representation of MAVLink MISSION_ITEM~%# See mavlink documentation~%~%~%~%# see enum MAV_FRAME~%uint8 frame~%uint8 FRAME_GLOBAL = 0~%uint8 FRAME_LOCAL_NED = 1~%uint8 FRAME_MISSION = 2~%uint8 FRAME_GLOBAL_REL_ALT = 3~%uint8 FRAME_LOCAL_ENU = 4~%~%# see enum MAV_CMD and CommandCode.msg~%uint16 command~%~%bool is_current~%bool autocontinue~%# meaning of this params described in enum MAV_CMD~%float32 param1~%float32 param2~%float32 param3~%float32 param4~%float64 x_lat~%float64 y_long~%float64 z_alt~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <WpList>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'wpList) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <WpList>))
  "Converts a ROS message object to a list"
  (cl:list 'WpList
    (cl:cons ':wpList (wpList msg))
))
