; Auto-generated. Do not edit!


(cl:in-package offb-srv)


;//! \htmlinclude Web_Input-request.msg.html

(cl:defclass <Web_Input-request> (roslisp-msg-protocol:ros-message)
  ((DroneID
    :reader DroneID
    :initarg :DroneID
    :type cl:string
    :initform "")
   (hostel_to
    :reader hostel_to
    :initarg :hostel_to
    :type cl:string
    :initform ""))
)

(cl:defclass Web_Input-request (<Web_Input-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Web_Input-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Web_Input-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name offb-srv:<Web_Input-request> is deprecated: use offb-srv:Web_Input-request instead.")))

(cl:ensure-generic-function 'DroneID-val :lambda-list '(m))
(cl:defmethod DroneID-val ((m <Web_Input-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader offb-srv:DroneID-val is deprecated.  Use offb-srv:DroneID instead.")
  (DroneID m))

(cl:ensure-generic-function 'hostel_to-val :lambda-list '(m))
(cl:defmethod hostel_to-val ((m <Web_Input-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader offb-srv:hostel_to-val is deprecated.  Use offb-srv:hostel_to instead.")
  (hostel_to m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Web_Input-request>) ostream)
  "Serializes a message object of type '<Web_Input-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'DroneID))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'DroneID))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'hostel_to))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'hostel_to))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Web_Input-request>) istream)
  "Deserializes a message object of type '<Web_Input-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'DroneID) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'DroneID) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'hostel_to) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'hostel_to) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Web_Input-request>)))
  "Returns string type for a service object of type '<Web_Input-request>"
  "offb/Web_InputRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Web_Input-request)))
  "Returns string type for a service object of type 'Web_Input-request"
  "offb/Web_InputRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Web_Input-request>)))
  "Returns md5sum for a message object of type '<Web_Input-request>"
  "93721527c216f57d672506df413f1fd8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Web_Input-request)))
  "Returns md5sum for a message object of type 'Web_Input-request"
  "93721527c216f57d672506df413f1fd8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Web_Input-request>)))
  "Returns full string definition for message of type '<Web_Input-request>"
  (cl:format cl:nil "string DroneID~%string hostel_to~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Web_Input-request)))
  "Returns full string definition for message of type 'Web_Input-request"
  (cl:format cl:nil "string DroneID~%string hostel_to~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Web_Input-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'DroneID))
     4 (cl:length (cl:slot-value msg 'hostel_to))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Web_Input-request>))
  "Converts a ROS message object to a list"
  (cl:list 'Web_Input-request
    (cl:cons ':DroneID (DroneID msg))
    (cl:cons ':hostel_to (hostel_to msg))
))
;//! \htmlinclude Web_Input-response.msg.html

(cl:defclass <Web_Input-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Web_Input-response (<Web_Input-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Web_Input-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Web_Input-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name offb-srv:<Web_Input-response> is deprecated: use offb-srv:Web_Input-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <Web_Input-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader offb-srv:success-val is deprecated.  Use offb-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Web_Input-response>) ostream)
  "Serializes a message object of type '<Web_Input-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Web_Input-response>) istream)
  "Deserializes a message object of type '<Web_Input-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Web_Input-response>)))
  "Returns string type for a service object of type '<Web_Input-response>"
  "offb/Web_InputResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Web_Input-response)))
  "Returns string type for a service object of type 'Web_Input-response"
  "offb/Web_InputResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Web_Input-response>)))
  "Returns md5sum for a message object of type '<Web_Input-response>"
  "93721527c216f57d672506df413f1fd8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Web_Input-response)))
  "Returns md5sum for a message object of type 'Web_Input-response"
  "93721527c216f57d672506df413f1fd8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Web_Input-response>)))
  "Returns full string definition for message of type '<Web_Input-response>"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Web_Input-response)))
  "Returns full string definition for message of type 'Web_Input-response"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Web_Input-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Web_Input-response>))
  "Converts a ROS message object to a list"
  (cl:list 'Web_Input-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'Web_Input)))
  'Web_Input-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'Web_Input)))
  'Web_Input-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Web_Input)))
  "Returns string type for a service object of type '<Web_Input>"
  "offb/Web_Input")