;; Auto-generated. Do not edit!


(when (boundp 'offb::Data)
  (if (not (find-package "OFFB"))
    (make-package "OFFB"))
  (shadow 'Data (find-package "OFFB")))
(unless (find-package "OFFB::DATA")
  (make-package "OFFB::DATA"))

(in-package "ROS")
;;//! \htmlinclude Data.msg.html


(defclass offb::Data
  :super ros::object
  :slots (_DroneID _Hostel ))

(defmethod offb::Data
  (:init
   (&key
    ((:DroneID __DroneID) "")
    ((:Hostel __Hostel) "")
    )
   (send-super :init)
   (setq _DroneID (string __DroneID))
   (setq _Hostel (string __Hostel))
   self)
  (:DroneID
   (&optional __DroneID)
   (if __DroneID (setq _DroneID __DroneID)) _DroneID)
  (:Hostel
   (&optional __Hostel)
   (if __Hostel (setq _Hostel __Hostel)) _Hostel)
  (:serialization-length
   ()
   (+
    ;; string _DroneID
    4 (length _DroneID)
    ;; string _Hostel
    4 (length _Hostel)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _DroneID
       (write-long (length _DroneID) s) (princ _DroneID s)
     ;; string _Hostel
       (write-long (length _Hostel) s) (princ _Hostel s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _DroneID
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _DroneID (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _Hostel
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _Hostel (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get offb::Data :md5sum-) "8d6232d0931f3e45599dc91639a5fb46")
(setf (get offb::Data :datatype-) "offb/Data")
(setf (get offb::Data :definition-)
      "string DroneID
string Hostel

")



(provide :offb/Data "8d6232d0931f3e45599dc91639a5fb46")


