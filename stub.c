#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <dlfcn.h>
#include <stdio.h>
#include <pthread.h>

int
pthread_cond_init(pthread_cond_t *cond, const pthread_condattr_t *condattr)
{
    int (*func)() = dlsym(RTLD_NEXT, "pthread_cond_init");

    printf("Found func @%p\n", func);
    fflush(stdout);

    return func(cond, condattr);
}
