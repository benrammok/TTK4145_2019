Part1: Thinking about elevators
---------------------------

Not for handing in, just for thinking about. Talk to other groups, assistants, or even people who have taken the course in previous years.

Brainstorm some techniques you could use to prevent a user from being hopelessly stranded, waiting for an elevator that will never arrive. Think about the [worst-case](http://xkcd.com/748/) behaviour of the system.
 - What if the software controlling one of the elevators suddenly crashes?
   > Could potentially use multiple processes connected to a controller, if one process crashes, the controller can start a new process. The server could also hold a copy of the elevators current order queue. This could also be stored as a copy on each elevator, so that if the server crashes it can retrive the data from the elevators.
 - What if it doesn't crash, but hangs?
   > A controller should be able to detect if a process/thread/elevator software is hanging and restart it. However this does of course also goes for the controller, if that hangs then what? One possibility is to allow the elevators to also check if the controller is not hanging.
 - What if a message between machines is lost?
   > Could verify that the message has arrived within a certain ammount of time, if not, query a new request to get the message.
 - What if the network cable is suddenly disconnected? Then re-connected?
   > Program should be able to detect packet drop, if the system sends packages between one another, it could be easier to resynchronice when the network comes online. Having a controller which stores the messages before it's sent could be used to resychronise the system, alos the last action registered by the system could be the first action taken when the system comes back online.  
 - What if a user of the system is being a troll?
   > If a user is a troll, it would be somewhat difficult to detect, however a limit to the number of floors called at the same time could be a solution.
 - What if the elevator car never arrives at its destination?
   > Then the elevator system should detect and alert to the controller that there is something wrong with the elevator.