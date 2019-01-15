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
 > A race condition is a result of ordering or timing issues, which will affect the overall corectness of a program, there are multiple reasons why this can happen, context switching, OS operations or memory access, just to mention some, can lead to a race condition. A data race is a fault which occurs when two or more tasks/threads "interact" with a shared memory location, the result of the interaction can be unreliable and it will be dependet on the sequence or timing of the access - BW Ch 6. p 143 also a good source: https://docs.oracle.com/cd/E19205-01/820-0619/geojs/index.html

### List some advantages of using message passing over lock-based synchronization primitives.
> Does not need synchronisation. Usually eaiser to scale to larger systems. Portable.

>Good source: https://pdfs.semanticscholar.org/4cf9/d3a664698d93390da18f2e58ff6dbd58fc4b.pdf

### List some advantages of using lock-based synchronization primitives over message passing.
> Message passing usually needs some more work to get the same functionallity that a similar program utilizing shared variables.

>Good source: https://pdfs.semanticscholar.org/4cf9/d3a664698d93390da18f2e58ff6dbd58fc4b.pdf