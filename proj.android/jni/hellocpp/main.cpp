#include "AppDelegate.h"
#include "cocos2d.h"
#include "platform/android/jni/JniHelper.h"
#include <jni.h>
#include <android/log.h>

#define  LOG_TAG    "main"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

using namespace cocos2d;

//cocos3.6版本以下，编译
//void cocos_android_app_init (JNIEnv* env, jobject thiz) {
//    LOGD("cocos_android_app_init");
//    AppDelegate *pAppDelegate = new AppDelegate();
//}

//cocos3.6版本以上，编译
void cocos_android_app_init (JNIEnv* env) {
    LOGD("cocos_android_app_init");
    AppDelegate *pAppDelegate = new AppDelegate();
}
