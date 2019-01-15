#include <pthread.h>
#include <stdio.h>

//To limit access to a resource a mutex should be used, however a semaphore could also be used
pthread_mutex_t count_mutex;

int i = 0;

// Note the return type: void*
void* incrementingThreadFunction(){
    for (int j = 0; j < 1000000; j++) {
		pthread_mutex_lock(&count_mutex);
		i++;
		pthread_mutex_unlock(&count_mutex);
    }
    return NULL;
}

void* decrementingThreadFunction(){
    for (int j = 0; j < 1000000; j++) {
		pthread_mutex_lock(&count_mutex);
		i--;
		pthread_mutex_unlock(&count_mutex);
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
