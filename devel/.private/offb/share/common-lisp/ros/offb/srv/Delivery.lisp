; Auto-generated. Do not edit!


(cl:in-package offb-srv)


;//! \htmlinclude Delivery-request.msg.html

(cl:defclass <Delivery-request> (roslisp-msg-protocol:ros-message)
  ((delivered
    :reader delivered
    :initarg :delivered
    :type cl:boolean
    :initform cl:nil)
   (DroneID
    :reader DroneID
    :initarg :DroneID
    :type cl:string
    :initform ""))
)

(cl:defclass Delivery-request (<Delivery-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Delivery-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Delivery-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name offb-srv:<Delivery-request> is deprecated: use offb-srv:Delivery-request instead.")))

(cl:ensure-generic-function 'delivered-val :lambda-list '(m))
(cl:defmethod delivered-val ((m <Delivery-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader offb-srv:delivered-val is deprecated.  Use offb-srv:delivered instead.")
  (delivered m))

(cl:ensure-generic-function 'DroneID-val :lambda-list '(m))
(cl:defmethod DroneID-val ((m <Delivery-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader offb-srv:DroneID-val is deprecated.  Use offb-srv:DroneID instead.")
  (DroneID m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Delivery-request>) ostream)
  "Serializes a message object of type '<Delivery-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'delivered) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'DroneID))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'DroneID))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Delivery-request>) istream)
  "Deserializes a message object of type '<Delivery-request>"
    (cl:setf (cl:slot-value msg 'delivered) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'DroneID) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'DroneID) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Delivery-request>)))
  "Returns string type for a service object of type '<Delivery-request>"
  "offb/DeliveryRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Delivery-request)))
  "Returns string type for a service object of type 'Delivery-request"
  "offb/DeliveryRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Delivery-request>)))
  "Returns md5sum for a message object of type '<Delivery-request>"
  "87b4be1048437cbe6f7e4ccfb825383b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Delivery-request)))
  "Returns md5sum for a message object of type 'Delivery-request"
  "87b4be1048437cbe6f7e4ccfb825383b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Delivery-request>)))
  "Returns full string definition for message of type '<Delivery-request>"
  (cl:format cl:nil "bool delivered~%string DroneID~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Delivery-request)))
  "Returns full string definition for message of type 'Delivery-request"
  (cl:format cl:nil "bool delivered~%string DroneID~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Delivery-request>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'DroneID))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Delivery-request>))
  "Converts a ROS message object to a list"
  (cl:list 'Delivery-request
    (cl:cons ':delivered (delivered msg))
    (cl:cons ':DroneID (DroneID msg))
))
;//! \htmlinclude Delivery-response.msg.html

(cl:defclass <Delivery-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Delivery-response (<Delivery-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Delivery-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Delivery-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name offb-srv:<Delivery-response> is deprecated: use offb-srv:Delivery-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <Delivery-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader offb-srv:success-val is deprecated.  Use offb-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Delivery-response>) ostream)
  "Serializes a message object of type '<Delivery-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Delivery-response>) istream)
  "Deserializes a message object of type '<Delivery-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Delivery-response>)))
  "Returns string type for a service object of type '<Delivery-response>"
  "offb/DeliveryResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Delivery-response)))
  "Returns string type for a service object of type 'Delivery-response"
  "offb/DeliveryResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Delivery-response>)))
  "Returns md5sum for a message object of type '<Delivery-response>"
  "87b4be1048437cbe6f7e4ccfb825383b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Delivery-response)))
  "Returns md5sum for a message object of type 'Delivery-response"
  "87b4be1048437cbe6f7e4ccfb825383b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Delivery-response>)))
  "Returns full string definition for message of type '<Delivery-response>"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Delivery-response)))
  "Returns full string definition for message of type 'Delivery-response"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Delivery-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Delivery-response>))
  "Converts a ROS message object to a list"
  (cl:list 'Delivery-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'Delivery)))
  'Delivery-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'Delivery)))
  'Delivery-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Delivery)))
  "Returns string type for a service object of type '<Delivery>"
  "offb/Delivery")