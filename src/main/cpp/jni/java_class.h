#ifndef JAVA_CLASS_H
#define JAVA_CLASS_H

#include "jni/jni.h"
#include "jni/java_method.h"
#include "jni/java_field.h"
#include "functions.h"

extern JNIEnv *obtainEnv();

class JavaClass {
    public:
        template <typename R, typename... Args>
        JavaStaticMethod<R, Args...> getStaticMethod(const char *name, const char *signature);

        template <typename R>
        JavaStaticField<R> getStaticField(const char *name, const char *signature);


        jclass javaClass;
};

#include "java_class_impl.h"

#endif
