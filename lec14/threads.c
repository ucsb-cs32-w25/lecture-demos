#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"

volatile int counter = 0; 
int loops;

void *worker(void *arg) {
    int i;
    for (i = 0; i < loops; i++) {
	counter++;
    }
    return NULL;
}

int main(int argc, char *argv[]) {
    if (argc != 2) { 
	fprintf(stderr, "usage: threads <loops>\n"); 
	exit(1); 
    } 
    loops = atoi(argv[1]);
    printf("Initial value : %d\n", counter);
    pthread_t t1, t2;
    Pthread_create(&t1, NULL, worker, NULL); 
    Pthread_create(&t2, NULL, worker, NULL);
    Pthread_join(t1, NULL);
    Pthread_join(t2, NULL);
    printf("Final value   : %d\n", counter);
    return 0;
}

