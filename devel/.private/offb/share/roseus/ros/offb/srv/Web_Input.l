;; Auto-generated. Do not edit!


(when (boundp 'offb::Web_Input)
  (if (not (find-package "OFFB"))
    (make-package "OFFB"))
  (shadow 'Web_Input (find-package "OFFB")))
(unless (find-package "OFFB::WEB_INPUT")
  (make-package "OFFB::WEB_INPUT"))
(unless (find-package "OFFB::WEB_INPUTREQUEST")
  (make-package "OFFB::WEB_INPUTREQUEST"))
(unless (find-package "OFFB::WEB_INPUTRESPONSE")
  (make-package "OFFB::WEB_INPUTRESPONSE"))

(in-package "ROS")





(defclass offb::Web_InputRequest
  :super ros::object
  :slots (_DroneID _hostel_to ))

(defmethod offb::Web_InputRequest
  (:init
   (&key
    ((:DroneID __DroneID) "")
    ((:hostel_to __hostel_to) "")
    )
   (send-super :init)
   (setq _DroneID (string __DroneID))
   (setq _hostel_to (string __hostel_to))
   self)
  (:DroneID
   (&optional __DroneID)
   (if __DroneID (setq _DroneID __DroneID)) _DroneID)
  (:hostel_to
   (&optional __hostel_to)
   (if __hostel_to (setq _hostel_to __hostel_to)) _hostel_to)
  (:serialization-length
   ()
   (+
    ;; string _DroneID
    4 (length _DroneID)
    ;; string _hostel_to
    4 (length _hostel_to)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _DroneID
       (write-long (length _DroneID) s) (princ _DroneID s)
     ;; string _hostel_to
       (write-long (length _hostel_to) s) (princ _hostel_to s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _DroneID
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _DroneID (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _hostel_to
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _hostel_to (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass offb::Web_InputResponse
  :super ros::object
  :slots (_success ))

(defmethod offb::Web_InputResponse
  (:init
   (&key
    ((:success __success) nil)
    )
   (send-super :init)
   (setq _success __success)
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass offb::Web_Input
  :super ros::object
  :slots ())

(setf (get offb::Web_Input :md5sum-) "93721527c216f57d672506df413f1fd8")
(setf (get offb::Web_Input :datatype-) "offb/Web_Input")
(setf (get offb::Web_Input :request) offb::Web_InputRequest)
(setf (get offb::Web_Input :response) offb::Web_InputResponse)

(defmethod offb::Web_InputRequest
  (:response () (instance offb::Web_InputResponse :init)))

(setf (get offb::Web_InputRequest :md5sum-) "93721527c216f57d672506df413f1fd8")
(setf (get offb::Web_InputRequest :datatype-) "offb/Web_InputRequest")
(setf (get offb::Web_InputRequest :definition-)
      "string DroneID
string hostel_to
---
bool success

")

(setf (get offb::Web_InputResponse :md5sum-) "93721527c216f57d672506df413f1fd8")
(setf (get offb::Web_InputResponse :datatype-) "offb/Web_InputResponse")
(setf (get offb::Web_InputResponse :definition-)
      "string DroneID
string hostel_to
---
bool success

")



(provide :offb/Web_Input "93721527c216f57d672506df413f1fd8")


