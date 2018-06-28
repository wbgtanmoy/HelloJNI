#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jint JNICALL
Java_com_codopoliz_hellojni_MainActivity_mulTwoValues(JNIEnv *env, jclass type, jint a, jint b) {
        return a*b;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_codopoliz_hellojni_MainActivity_stringFromJNI( JNIEnv *env, jobject /* this */) {
    std::string hello = "Hello from C++, written using Java Native Interface Framerwork.";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_codopoliz_hellojni_MainActivity_sumTwoValues(JNIEnv *env, jobject instance, jint a, jint b) {
    return a + b;
}
