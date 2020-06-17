; Auto-generated. Do not edit!


(cl:in-package offb-msg)


;//! \htmlinclude location_id.msg.html

(cl:defclass <location_id> (roslisp-msg-protocol:ros-message)
  ((hostel
    :reader hostel
    :initarg :hostel
    :type cl:string
    :initform "")
   (drone_id
    :reader drone_id
    :initarg :drone_id
    :type cl:integer
    :initform 0))
)

(cl:defclass location_id (<location_id>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <location_id>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'location_id)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name offb-msg:<location_id> is deprecated: use offb-msg:location_id instead.")))

(cl:ensure-generic-function 'hostel-val :lambda-list '(m))
(cl:defmethod hostel-val ((m <location_id>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader offb-msg:hostel-val is deprecated.  Use offb-msg:hostel instead.")
  (hostel m))

(cl:ensure-generic-function 'drone_id-val :lambda-list '(m))
(cl:defmethod drone_id-val ((m <location_id>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader offb-msg:drone_id-val is deprecated.  Use offb-msg:drone_id instead.")
  (drone_id m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <location_id>) ostream)
  "Serializes a message object of type '<location_id>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'hostel))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'hostel))
  (cl:let* ((signed (cl:slot-value msg 'drone_id)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <location_id>) istream)
  "Deserializes a message object of type '<location_id>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'hostel) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'hostel) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'drone_id) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<location_id>)))
  "Returns string type for a message object of type '<location_id>"
  "offb/location_id")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'location_id)))
  "Returns string type for a message object of type 'location_id"
  "offb/location_id")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<location_id>)))
  "Returns md5sum for a message object of type '<location_id>"
  "f8413624a35f58bf520d7fbe4c49b730")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'location_id)))
  "Returns md5sum for a message object of type 'location_id"
  "f8413624a35f58bf520d7fbe4c49b730")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<location_id>)))
  "Returns full string definition for message of type '<location_id>"
  (cl:format cl:nil "string hostel~%int32 drone_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'location_id)))
  "Returns full string definition for message of type 'location_id"
  (cl:format cl:nil "string hostel~%int32 drone_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <location_id>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'hostel))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <location_id>))
  "Converts a ROS message object to a list"
  (cl:list 'location_id
    (cl:cons ':hostel (hostel msg))
    (cl:cons ':drone_id (drone_id msg))
))
