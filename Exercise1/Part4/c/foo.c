#include <pthread.h>
#include <stdio.h>

int i = 0;

void* incrementingThreadFunction(){
    for(int j = 0; j < 1000000; j++){
        i = i + 1;
    }
    return NULL;
}

void* decrementingThreadFunction(){
    for(int j = 0; j < 1000000; j++){
        i = i - 1;
    }
    return NULL;
}


int main(){
    pthread_t incrementingThread, decrementingThread;
     
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);
    
    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    
    printf("The magic number is: %d\n", i);
    return 0;
}
