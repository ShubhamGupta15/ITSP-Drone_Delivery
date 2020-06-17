
(cl:in-package :asdf)

(defsystem "offb-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Delivery" :depends-on ("_package_Delivery"))
    (:file "_package_Delivery" :depends-on ("_package"))
    (:file "Web_Input" :depends-on ("_package_Web_Input"))
    (:file "_package_Web_Input" :depends-on ("_package"))
  ))