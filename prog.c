#include <errno.h>
#include <pthread.h>
#include <stdio.h>

int
main(void)
{
    pthread_cond_t cond;

    pthread_cond_init(&cond, NULL);

    printf("Done\n");
    fflush(stdout);

    pthread_cond_destroy(&cond);

    return 0;
}
