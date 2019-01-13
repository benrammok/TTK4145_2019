# Reasons for concurrency and parallelism


To complete this exercise you will have to use git. Create one or several commits that adds answers to the following questions and push it to your groups repository to complete the task.

When answering the questions, remember to use all the resources at your disposal. Asking the internet isn't a form of "cheating", it's a way of learning.

 ### What is concurrency? What is parallelism? What's the difference?
 > Concurrency is when multiple task can be started, run and completed in overlapping times, these tasks can be run on a processor, and while it seems like they are running at the same time, the processor switches between the tasks so that they all get a slice of time and all complete on time.
 Parrallelism is when the multiple tasks can be run in parallell, in a multi core system, this can be achieved by running each task on the different cores. The difference is that both tasks can be started, run, and completed at the same time or at different times. 
 Source: https://howtodoinjava.com/java/multi-threading/concurrency-vs-parallelism/ 
 
 ### Why have machines become increasingly multicore in the past decade?
 > One of the challenges with scaling down transistors is actually the size, when the transistors becomes small and tightly packed the heat produced increases and affects performance. When these becomes increasingly small the transistors can start to  tunnel electrons and stop working, so the overall size of the transistors does not change frequently anymore. To reduce the power dissipation the use of a lower frequency clock, and more cores lead to an increase performance.
 Source: https://spectrum.ieee.org/semiconductors/processors/multicore-cpu-processor-proliferation
 
 ### What kinds of problems motivates the need for concurrent execution?
 (Or phrased differently: What problems do concurrency help in solving?)
 > Concurrency allows different tasks to be run "at once", if a program does calculations, but also recieves data from the internet or sensors concurrency gives the illution that these tasks are beign executed simultaneously.
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > I would claim that it does make it easier, but at the same time also somewhat harder, there are some caveats which the programmers need to consider when creating concurrent programs, but overall it can make for some what easier and more sensible ways of designing the program. ### Might need to fill inn some more.
 
 ### What are the differences between processes, threads, green threads, and coroutines?
 >  - A process is a OS managed instance of a program, the program runs concurrent
    - Thread is a part of a running instance which can be executed, the os changes between the different threads in the program which causes it to seem like the program code
    - Green Thread are user created threads
    - Coroutines are similar to subroutines in that they usually implements a part of a complex computiation into smaller helper functions/parts, however where subroutines usually are called and managed from a main function, coroutines calls other coroutines, which in turns forwards the call to other functions/coroutines, in this sense the coroutines forms a "pipeline" which can change dependant on the data recieved and potential variables/flags that are set.  
  Good answers at: https://stackoverflow.com/questions/3324643/processes-threads-green-threads-protothreads-fibers-coroutines-whats-the and https://www.cse.unsw.edu.au/~cs9242/17/lectures/02-threadsevents.pdf, for coroutines: http://wla.berkeley.edu/~cs61a/fa11/lectures/streams.html
 ### Which one of these do `pthread_create()` (C/POSIX), `threading.Thread()` (Python), `go` (Go) create?
 > The functions creates a thread.
 
 ### How does pythons Global Interpreter Lock (GIL) influence the way a python Thread behaves?
 > The GIL is a Mutex which limits the execution of Python Bytcode to one thread at a time, the others are blocked an can be waiting for I/O or they sleeps.
 Source: https://wiki.python.org/moin/GlobalInterpreterLock and https://opensource.com/article/17/4/grok-gil
 
 ### With this in mind: What is the workaround for the GIL (Hint: it's another module)?
 > Not completely sure, which module it is hinted to here, but one way is to use multiprocessing. There might be other ways as well.
 Source: https://realpython.com/python-gil/
 
 ### What does `func GOMAXPROCS(n int) int` change? 
 > It sets a limit on the number of OS threads which can executed user-level GO code at the same time.
