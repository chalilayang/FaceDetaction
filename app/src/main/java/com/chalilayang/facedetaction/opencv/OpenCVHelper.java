package com.chalilayang.facedetaction.opencv;

/**
 * Created by chalilayang on 2017/3/14.
 */

public class OpenCVHelper {
    static {
        System.loadLibrary("OpenCV");
    }
    public static native int[] gray(int[] buf, int w, int h);
}
