LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)


OpenCV_INSTALL_MODULES := on
OpenCV_CAMERA_MODULES := on

OPENCV_LIB_TYPE :=STATIC

include ../../../../native/jni/OpenCV.mk

LOCAL_MODULE := OpenCV
LOCAL_C_INCLUDES += $(LOCAL_PATH)
LOCAL_SRC_FILES := com_chalilayang_facedetaction_opencv_OpenCVHelper.cpp \
DetectionBasedTracker_jni.cpp

LOCAL_LDLIBS += -lm -llog
LOCAL_LDLIBS += -latomic

include $(BUILD_SHARED_LIBRARY)