## Quiz 2 - Processes 



```

1.Which of the following is not an entry in the PCB??

Program counter

Registers

State

Address Space

Priority

Open files

Closed files




```
> Answer :  Option D

```

4.True or False : Program is an activity entity and process is a passive entity 

True

False

```
> Answer :  Option F

```

5.Which option can be used with pstree command to display the PPIDs ??

--pp

--pg

-pp

-pg




```
> Answer :  Option D

```

6.Context saving is done in ____________

SWAP AREA

SAVE AREA

CACHE AREA

TEMP AREA

```
> Answer :  Option B

```

7.True or False : Each process must have a PID and PPID 

True

False

```
> Answer :  Option True

```

8.fork() returns _________________ on SUCCESS to the parent 

0

Child's PID

<= -1

Parent's PID

```
> Answer :  Option B

```

9._______________ library call always appends error message based on return value of system call.

```
> Answer :  perror

```

10.__________________ system calls allow parent node to wait for the child??


```
> Answer : wait    wait()    waitpid    waitpid()


```

11.Which is the correct representation of process life cycle of a process which requires no inputs in Linux ??

Ready -> SCHEDULED -> Running -> PREEMPTION -> COMPLETING -> Terminated

Ready -> BLOCKING -> Running -> COMPLETING -> UNBLOCKING -> Terminated 

Ready -> SCHEDULED -> Running -> COMPLETING -> Terminated 

Ready -> SCHEDULED -> Running -> BLOCKING -> Blocked -> UNBLOCKING -> COMPLETING -> Terminated



```

> Answer :  Option C

```

12.What is the major difference between using bash and ./ for running shell scripts ??

./ creates a shell as the child process to run a script

bash creates a shell as the child process to run a script

./ runs the process in the current shell

bash runs the process in the current shell

```
> Answer :  Option B & C
```

13.True or False : Parent and Child can run concurrently

False

True

```

> Answer : True
```

14.Which of the following functions can used to fetch the parent's and child's PIDs ??

getid()

getpid()

getcpid()

getppid()

```
> Answer :  Option B & D
```

15.True or False : Child process will be the entry point function after the fork() is called

True 

False

```
> Answer :  False
```

16.Which command can be used to check the process running in the system??

ls

ps

proc

lsp

```
> Answer :  Option B
```

17.What is the expected output of the below code?

  1 #include <unistd.h>
  2 #include <stdio.h>
  3
  4 int main()
  5 {
  6     int ret =fork();
  7
  8     if(ret < 0) {
  9          perror("fork");
 10         return errno;
 11     }
 12
 13     if(ret == 0)
 14         printf("Hello\n");
 15     else
 16         printf("Hi");
 17
 18     return 0;
 19 }

First Hello will be printed and Hi will be printed

Either Hi or Hello will be printed

Output is unpredictable (either Hi or Hello can be printed)

First Hi will be printed and then Hello will be printed

```
> Answer :  Option C

```
18.Which of the following can be used to run a shell script from terminal ??

Script

./Script 

run Script

bash Script

```
> Answer :  Option B & D
```
19.How many children would be created by the below code?

  1 #include <unistd.h>
  2 #include <stdio.h>
  3
  4 int main()
  5 {
  6     fork();
  7     fork();
  8     fork();
  9     fork();
 10    printf("Hello\n");
 11
 12    return 0;
 13 }

Note: write the number alone.

```
> Answer :  16
```

20.True or False : Processes can have shared PIDs

True

False

```
> Answer :  False
```

21.Which is the best time to rob a bank ??

Security change

Bank holiday

Lunch break

Midnight

```
> Answer :  Option A
```
22._________________ symbol can be used to push a process to the background?

```
> Answer :  &
```
23.Individual states of different processes are maintained by the Kernel in _______________________

Process confinement block

Process compiled block

process composition block

Process control block

```
> Answer :  Option D

```
24.child process becomes, _______________ process, while the parent is not waiting and still running.
 
```
> Answer :  Zombie
```
25.Process which has been terminated but has entry in the process table is ________________; Process without parent is _______________, and ________________ runs in the background 

orphan; zombie; daemon

zombie; orphan; daemon

daemon; zombie; orphan

daemon; orphan; zombie
 
```
> Answer :  Option B
```
26.A program under execution is called as __________________
```
> Answer :  process
```
27.___________ is a system call that creates a child process by duplicating the calling/parent process
 zombie

```
> Answer :fork fork() fork();



 ```
28.The action taken by the kernel when one process leaves CPU and/or other process enters CPU is called as ________________________
 ```
> Answer :Context Switching Context switching context switching Context Switch Context switch context switch
