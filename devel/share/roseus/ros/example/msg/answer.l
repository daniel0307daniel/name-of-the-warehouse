;; Auto-generated. Do not edit!


(when (boundp 'example::answer)
  (if (not (find-package "EXAMPLE"))
    (make-package "EXAMPLE"))
  (shadow 'answer (find-package "EXAMPLE")))
(unless (find-package "EXAMPLE::ANSWER")
  (make-package "EXAMPLE::ANSWER"))

(in-package "ROS")
;;//! \htmlinclude answer.msg.html


(defclass example::answer
  :super ros::object
  :slots (_answer ))

(defmethod example::answer
  (:init
   (&key
    ((:answer __answer) 0)
    )
   (send-super :init)
   (setq _answer (round __answer))
   self)
  (:answer
   (&optional __answer)
   (if __answer (setq _answer __answer)) _answer)
  (:serialization-length
   ()
   (+
    ;; int32 _answer
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _answer
       (write-long _answer s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _answer
     (setq _answer (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get example::answer :md5sum-) "470a19a3f8e6b2cdb8f4d6ac8875463a")
(setf (get example::answer :datatype-) "example/answer")
(setf (get example::answer :definition-)
      "int32 answer

")



(provide :example/answer "470a19a3f8e6b2cdb8f4d6ac8875463a")


