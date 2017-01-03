#include <string>
#include <jni.h>
#include "hello-jni.h"
using namespace std;

JNIEXPORT jstring JNICALL Java_com_restadoapp_ndkmodule_NdkmoduleModule_nativeGetMessage( JNIEnv* env, jobject thiz )
{
		string words = "Hello from JNI 2!";

		return env->NewStringUTF(words.c_str());
}
