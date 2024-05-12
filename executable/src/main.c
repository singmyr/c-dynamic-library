#include <stdio.h>
#include <dlfcn.h>
#include "library.h"

int main() {
    void* handle = dlopen("../library/build/libdynamic_library.so", RTLD_LOCAL | RTLD_LAZY);    
    const char* (*ping)();
    
    *(void **)(&ping) = dlsym(handle, "ping");

    printf("%s\n", ping());

    dlclose(handle);

    return 0;
}