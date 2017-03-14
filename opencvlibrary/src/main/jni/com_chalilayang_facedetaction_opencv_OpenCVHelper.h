//
// Created by chalilayang on 2017/3/14.
//
#include <jni.h>
#ifndef FACEDETACTION_COM_CHALILAYANG_FACEDETACTION_OPENCV_OPENCVHELPER_H
#define FACEDETACTION_COM_CHALILAYANG_FACEDETACTION_OPENCV_OPENCVHELPER_H
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     cn_edu_zafu_opencv_OpenCVHelper
 * Method:    gray
 * Signature: ([III)[I
 */
JNIEXPORT jintArray JNICALL Java_com_chalilayang_facedetaction_opencv_OpenCVHelper_gray
        (JNIEnv *, jclass, jintArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif //FACEDETACTION_CN_EDU_ZAFU_OPENCV_OPENCVHELPER_H
