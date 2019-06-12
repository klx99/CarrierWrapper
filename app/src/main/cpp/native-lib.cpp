#include <jni.h>
#include <string>

#include <ela_carrier.h>

extern "C" JNIEXPORT jstring

JNICALL
Java_org_elastos_carrierwrapper_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";


    ela_log_init(ElaLogLevel_Debug, nullptr, nullptr);

    return env->NewStringUTF(hello.c_str());
}
