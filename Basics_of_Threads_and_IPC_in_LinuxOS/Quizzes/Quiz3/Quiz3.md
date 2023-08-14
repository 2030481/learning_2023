
# 1. True or False : Threads are Heavy Weight Process as scheduling cannot be preempted
```
True

False
```
>Answer- FALSE

# 2. What is the output of the below code?
```c
  1 #include <stdio.h>
  2 #include <stdlib.h>
  3 #include <signal.h>
  4 #include <unistd.h>
  5
  6 void sig_handler(int sig_num) {
  7     printf("In Signal Handler\n");
  8 }
  9
 10 int main(void) {
 11     signal(SIGTERM, sig_handler);
 12
 13     while(1) {
 14         sig_handler(2);
 15     }
 16
 17     return 0;
 18 }
```
```
Print "In Signal Handler" infinitely 
Print "In Signal Handler" infinitely only after the command "ctrl + c"
Print "In Signal Handler" infinitely only after the command "kill -9 <PID>"
Print "In Signal Handler" infinitely only after the command "kill -SIGTERM <PID>" 
```
> Answer- A

# 5. Command to view the threads running in the system
```
ps -Lt

ps -LtF

ps -eLF

ps -eLx
```
> Answer- C

# 6. What is the output of the below code??
```c
  1 #include <signal.h>
  2 #include <stdio.h>
  3 #include <stdlib.h>
  4 #include <unistd.h>
  5 #include <time.h>
  6
  7 void alarm_handler(int signo) {
  8      time_t t1;
  9      time(&t1);
 10     printf("Current time is %s", ctime(&t1));
 11 }
 12
 13 int main() {
 14     int i = 5;
 15
 16     signal(SIGALRM, alarm_handler);
 17     while (1) {
 18         if (i != 0) {
 19             alarm(i--);
 20         }
 21         else {
 22             break;
 23         }
 24     }
 25
 26     return 0;
 27 }
```
```
Current time is <time> will be printed 0 times

Current time is <time> will be printed 5 times

Current time is <time> will be printed infinitely

Compiler error
``` 
> Answer- A

# 7. What does the line "signal(SIGUSR1, SIG_IGN);" mean ??
```
Compiler error

SIGUSR1 will be ignored by the process

SIG_IGN will hereafter work as SIGUSR1

SIGUSR1 will be registered and a callback function named SIG_IGN will be called when SIGUSR1 is sent
```
> Answer- B

# 8. Which of the following signals cannot be caught or ignored ??
```
SIGTERM

SIGINT

SIGKILL

SIGSTOP
```
> Answer- C & D

# 9. Command to terminate a process is _______________
```
ctrl + z
ctrl + x
ctrl + s
ctrl + c
```
> Answer- D

# 10. True or False : Threads created from process have unique PIDs
```
True

False
```
> Answer- TRUE

# 11._______________ command can be used to terminate a process with PID and _____________ with process name??

Note: write both commands with single space in between.


Correct answers:
kill pkill
kill, pkill
kill and pkill

# 12.Library required to be linked for POSIX interfaces is 

lposix

lthreads

lpthread

All of the above can be used

Answer- C

# 13.Which of the below system calls can be used to make the main thread wait for the sub-threads ??

pthread_create()

pthread_wait()

pthread_join()

pthread_stop()

Answer- C


# 14.While working with multithreading, which are the section common to the thread?

Registers

Code

Stack

Data

Files

Answer- B , D & E

# 15._____________ library function would allocate new resources after creating a child process?



>Correct answers: exec execvp execv execlp execl execle execvpe



# 16.True or False : Signals do not have a interrupt vector table

True

False

> Answer- TRUE

# 17.Command to stop a process is ________________

ctrl + z

ctrl + c

ctrl + s

ctrl + x

> Answer- A

# 18.
```c
  1 #include <stdio.h>
  2 #include <pthread.h>
  3 #include <unistd.h>
  4
  5 void *char_print(void *arg)
  6 {
  7         while (1) {
  8                 fputc(*(char *) arg, stderr);
  9                 sleep(1);
 10         }
 11 }
 12
 13 int main ()
 14 {
 15         pthread_t thread1_id;
 16         pthread_t thread2_id;
 17         char ch1 = 'A';
 18         char ch2 = 'S';
 19
 20         pthread_create(&thread1_id, NULL, &char_print, &ch1);
 21         pthread_create(&thread2_id, NULL, &char_print, &ch2);
 22
 23         pthread_join(thread1_id, NULL);
 24         pthread_join(thread2_id, NULL);
 25
 26         return 0;
 27 }
```
This code will print A and S concurrently

Runtime error since same handler cannot be used while registering threads

Compiler error since same handler cannot be used while registering threads

It will print only A since it gets registered first

It will print only S since it gets registered last

> Answer- A

# 19. Feature that provides concurrency within the same process is called as _____________________

subprocess

nodes

threads

signals

> Answer- C

#  20. Command to view list all the available signals is ??

kill -a

kill -l

kill -f

kill -m

>Answer- B

#  21. Process are of ___________ entities and threads are part of ________________ entitites

different; different

same; same

different; same

same; different

> Answer- C

#  22. What is the output of the below code??
```c
  1 #include <stdio.h>
  2 #include <pthread.h>
  3 #include <unistd.h>
  4
  5 void *print_char()
  6 {
  7     while (1)
  8     {
  9          fputc('|', stdout);
 10         sleep(1);
 11     }
 12 }
 13
 14 int main ()
 15 {
 16     pthread_t thread_id;
 17     pthread_create(&thread_id, NULL, &print_char, NULL);
 18     while (1)
 19     {
 20         fputc('-', stderr);
 21         sleep(1);
 22     }
 23     return 0;
 24 }
```
Only - will be printed infinitely until buffer is full

Only | will be printed infinitely until buffer is full

| and - will be printed synchronously and infinitely

| and - will be printed asynchronously and infinitely

> Answer- A

# 23.Which of the below commands will continue a stopped process ??

kill -SIGCONT <PID>

kill -SIGPIPE <PID>

kill -18 <PID>

kill -24 <PID>

> Answer- A & C

#  24. What is the output of the below code??
```c
  1 #include<unistd.h>
  2 #include<signal.h>
  3 #include<stdio.h>
  4 #include<stdlib.h>
  5
  6 int main() {
  7      signal(SIGINT, handler_for_int);
  8      signal(SIGQUIT, handler_for_quit);
  9      signal(SIGTERM, handler_for_term);
 10     signal(SIGTSTP, handler_for_tstp);
 11
 12     return 0;
 13 }
```
```
Kernel will go to the default handlers for the  register signals
Compiler error as function definitions are not present
Runtime error as kernel cannot find the definitions during handling them
Linker error as function definitions are not present 
```
> Answer- B

# 25. Linux supports which of the below threading model
```
One to Many
Many to One
One to One
Many to Many
```
> Answer- C

#  26. What will be the output of the following code?

```c
  1 #include <stdio.h>
  2 #include <pthread.h>
  3 #include <unistd.h>
  4
  5 void *char_2_print() {
  6         while (1) {
  7                 fputc('|', stderr);
  8                 sleep(1);
  9         }
 10 }
 11
 12 void *char_1_print() {
 13         while (1) {
 14                 fputc('-', stderr);
 15                 sleep(1);
 16         }
 17 }
 18
 19 int main () {
 20         pthread_t thread1_id;
 21         pthread_t thread2_id;
 22
 23         pthread_create(&thread1_id, NULL, &char_1_print, NULL);
 24         pthread_join(thread1_id, NULL);
 25         pthread_create(&thread2_id, NULL, &char_2_print, NULL);
 26
 27         pthread_join(thread2_id, NULL);
 28
 29         return 0;
 30 }
```
```
Will print '|' and '-' printed asynchronously

Will print '|' infinitely 

Will print '-' infinitely

Both will not be printed
```
> Answer- C

# 27. 
```c
 1 #include <unistd.h>
  2 #include <stdio.h>
  3
  4 int main()
  5 {
  6     printf("Hi\n");
  7     execlp("/bin/ls", "ls", NULL);
  8     printf("Hello\n");
  9
 10     return 0;
 11 }
 ```
```
What will be the output of the above code?

Hi will be printed. Then out Then output of ls will be printed

Hi and Hello will be printed first. Then output of ls will be printed

Hi will be printed. Then output of ls will be printed. Then Hello will be printed

Hello and Hi both will be printed but order is dependent on the system. Then output of ls will be printed
```
> Answer- A
