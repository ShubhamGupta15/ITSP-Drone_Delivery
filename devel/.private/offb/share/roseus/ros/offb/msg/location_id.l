;; Auto-generated. Do not edit!


(when (boundp 'offb::location_id)
  (if (not (find-package "OFFB"))
    (make-package "OFFB"))
  (shadow 'location_id (find-package "OFFB")))
(unless (find-package "OFFB::LOCATION_ID")
  (make-package "OFFB::LOCATION_ID"))

(in-package "ROS")
;;//! \htmlinclude location_id.msg.html


(defclass offb::location_id
  :super ros::object
  :slots (_hostel _drone_id ))

(defmethod offb::location_id
  (:init
   (&key
    ((:hostel __hostel) "")
    ((:drone_id __drone_id) 0)
    )
   (send-super :init)
   (setq _hostel (string __hostel))
   (setq _drone_id (round __drone_id))
   self)
  (:hostel
   (&optional __hostel)
   (if __hostel (setq _hostel __hostel)) _hostel)
  (:drone_id
   (&optional __drone_id)
   (if __drone_id (setq _drone_id __drone_id)) _drone_id)
  (:serialization-length
   ()
   (+
    ;; string _hostel
    4 (length _hostel)
    ;; int32 _drone_id
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _hostel
       (write-long (length _hostel) s) (princ _hostel s)
     ;; int32 _drone_id
       (write-long _drone_id s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _hostel
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _hostel (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int32 _drone_id
     (setq _drone_id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get offb::location_id :md5sum-) "f8413624a35f58bf520d7fbe4c49b730")
(setf (get offb::location_id :datatype-) "offb/location_id")
(setf (get offb::location_id :definition-)
      "string hostel
int32 drone_id

")



(provide :offb/location_id "f8413624a35f58bf520d7fbe4c49b730")


