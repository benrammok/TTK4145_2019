### What is the problem as described in the exercise?
> What happens is that multiple threads tries to access the shared variable at the "same" time, due to context switch which can occure during the read, add and store phase of the i = i + 1 and i = i - 1, the resultant value is not 0, but somewhat random everytime the code is run. The reason for the "random" numbers is simply the context switching, switching differently between the operations each time the program is run.

