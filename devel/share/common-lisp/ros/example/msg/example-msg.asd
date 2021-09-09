
(cl:in-package :asdf)

(defsystem "example-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "answer" :depends-on ("_package_answer"))
    (:file "_package_answer" :depends-on ("_package"))
  ))