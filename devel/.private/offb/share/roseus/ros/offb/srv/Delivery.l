;; Auto-generated. Do not edit!


(when (boundp 'offb::Delivery)
  (if (not (find-package "OFFB"))
    (make-package "OFFB"))
  (shadow 'Delivery (find-package "OFFB")))
(unless (find-package "OFFB::DELIVERY")
  (make-package "OFFB::DELIVERY"))
(unless (find-package "OFFB::DELIVERYREQUEST")
  (make-package "OFFB::DELIVERYREQUEST"))
(unless (find-package "OFFB::DELIVERYRESPONSE")
  (make-package "OFFB::DELIVERYRESPONSE"))

(in-package "ROS")





(defclass offb::DeliveryRequest
  :super ros::object
  :slots (_delivered _DroneID ))

(defmethod offb::DeliveryRequest
  (:init
   (&key
    ((:delivered __delivered) nil)
    ((:DroneID __DroneID) "")
    )
   (send-super :init)
   (setq _delivered __delivered)
   (setq _DroneID (string __DroneID))
   self)
  (:delivered
   (&optional __delivered)
   (if __delivered (setq _delivered __delivered)) _delivered)
  (:DroneID
   (&optional __DroneID)
   (if __DroneID (setq _DroneID __DroneID)) _DroneID)
  (:serialization-length
   ()
   (+
    ;; bool _delivered
    1
    ;; string _DroneID
    4 (length _DroneID)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _delivered
       (if _delivered (write-byte -1 s) (write-byte 0 s))
     ;; string _DroneID
       (write-long (length _DroneID) s) (princ _DroneID s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _delivered
     (setq _delivered (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _DroneID
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _DroneID (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass offb::DeliveryResponse
  :super ros::object
  :slots (_success ))

(defmethod offb::DeliveryResponse
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

(defclass offb::Delivery
  :super ros::object
  :slots ())

(setf (get offb::Delivery :md5sum-) "87b4be1048437cbe6f7e4ccfb825383b")
(setf (get offb::Delivery :datatype-) "offb/Delivery")
(setf (get offb::Delivery :request) offb::DeliveryRequest)
(setf (get offb::Delivery :response) offb::DeliveryResponse)

(defmethod offb::DeliveryRequest
  (:response () (instance offb::DeliveryResponse :init)))

(setf (get offb::DeliveryRequest :md5sum-) "87b4be1048437cbe6f7e4ccfb825383b")
(setf (get offb::DeliveryRequest :datatype-) "offb/DeliveryRequest")
(setf (get offb::DeliveryRequest :definition-)
      "bool delivered
string DroneID
---
bool success

")

(setf (get offb::DeliveryResponse :md5sum-) "87b4be1048437cbe6f7e4ccfb825383b")
(setf (get offb::DeliveryResponse :datatype-) "offb/DeliveryResponse")
(setf (get offb::DeliveryResponse :definition-)
      "bool delivered
string DroneID
---
bool success

")



(provide :offb/Delivery "87b4be1048437cbe6f7e4ccfb825383b")


