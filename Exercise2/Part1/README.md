# Mutex and Channel basics

### What is an atomic operation?
> An atomic operation is an operation which does not allow for interruption, so the operation is seen as a single operation from other threads. Source: https://software.intel.com/en-us/node/506090

### What is a semaphore?
> A semaphore is divided into two types **Counting Semaphore** and **Binary Semaphore**. A Counting Semaphore can have a value greater or equal to 0, where a Binary Semaphore can have a value of either 0 or 1. These are used to limit access to a shared ressource, a thread can call wait() which decreases the value of the semaphore, and after the thread is done accessing the ressource it calls signal() to increase the value of the flag. 

### What is a mutex?
> A mutex is similar to a Binary Semaphore, however it also includes ownership, so that no other tread can change the value, only the thread which called wait(), can call signal().

### What is the difference between a mutex and a binary semaphore?
> The difference is ownership, where the binary semaphore can have it's value increased, by other threads if the call signal(). The value of a Mutex is only allowed to be changed by the thread which called wait(), no other thread can call signal when it's locked. 

### What is a critical section?
> A critical section is a designation used on parts of the code where access to shared variables occure, the section should not be interruptable. An example is if two threads is accessing a common variable, if both threads are writing to it at the "same" time, the result might vary, dependant on how context switching is done.

### What is the difference between race conditions and data races?
 > A race condition occurs when multiple threads operate on the same ressource 

### List some advantages of using message passing over lock-based synchronization primitives.
> *Your answer here*

### List some advantages of using lock-based synchronization primitives over message passing.
> *Your answer here*
