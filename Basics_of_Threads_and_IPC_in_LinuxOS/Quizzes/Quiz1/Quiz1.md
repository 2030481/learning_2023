## Quiz 1 - OS Introduction & Architecture, Linux commands and System calls Required

#### 1.Name

#### 2.Mail ID 

#### 3.User applications can access hardware through _________________
(1 Point)

system call interface

process call interface

Application call Interface

None of the above

Answer A

#### 4.Which of the following is not a type of Cache ??
(1 Point)

Instruction cache

Data cache

Input cache

None of the above

Answer C

#### 5.In man page, section numbers _________ is for system calls and section numbers _________ is for library functions.

Note: write your answer with a single space between both the numbers.
(1 Point)

 Answer 2 3

#### 6  1 

```c
#include <stdio.h>             
  2
  3 int main() {
  4     static int x, y;
  5
  6     scanf("%d", x); // Assume I scan 10
  7     scanf("%d", y); // Assume I scan 11
  8
  9     printf("%d\n", x - y);
 10
 11     return 0;
 12 }
 ```

What would be the output of the above program.

Note: write the only result alone
(1 Point)


Answer Seg fault / runtime error

#### 7
```c
  1 #include <stdio.h>
  2 #include <string.h>
  3 #include <unistd.h>
  4 #include <errno.h>
  5
  6 #define SIZE        15
  7
  8 int main() {
  9     int fd, nbytes;
 10     char str[SIZE];
 11
 12     nbytes = read(0, str, SIZE);
 13
 14     if (nbytes < 0) {
 15         perror("read");
 16         return errno;
 17     }
 18
 19     nbytes = write(2, str, SIZE);
 20
 21     if (nbytes < 0) {
 22         perror("write");
 23         return errno;                                                                                                                            
 24     }
 25
 26     return 0;
 27 }
```
Observe the above code and identify the identify the file descriptors used to read and write system calls.

Note mention both the names with one single space.
(1 Point)

Answer 0 2

#### 8.
System call returns values _______________ on SUCCESS and __________________ on FAILURE
(1 Point)

equal to 0; greater than 0

equal to 0; less than/greater than 0

equal to/greater than 0; less than 0

equal to 0; NULL 

Answer C

#### 9.
True or False : Kernel is a system software that takes care of scheduling of process and takes care of interaction between user and hardware
(1 Point)

True

False


Answer A

#### 10.
"fd" stands for __________________ w.r.t. System calls ??
(1 Point)

file data

file derivator

file disk

file descriptor

Answer D

#### 11.
Command to list all error codes available is ________________________
(1 Point)

errno

errc

errcode

errn

Answer A

#### 12.
_______________ command is used to print Linux system information.
(1 Point)
uname


#### 13.
Which of the components is not required for a PC to boot ??
(1 Point)

Bootloader

Kernel Image

Root File System

All of the above


Answer D

#### 14.
Which of the following is not correct w.r.t System calls ??
(1 Point)

Interface between user space and kernel space

System calls are Hardware and Software interupts

System calls cause mode transitions

System calls can share same ID numbers

System calls can be requested user space

Answer B & D

#### 15.
__________________ command is used to provide the modified .bashrc file info to current running instance of the bash?
(1 Point)
Answer source


#### 16.
How does the return and exit differ
(1 Point)

both terminates the process irrespective of where it is written

exits terminates the process no matter where it is written, but return terminates the process, only if it is written in main

return terminates the process no matter it is written, but exit terminates only if it is written in main

All of the above

Answer B

#### 17.
Error no. "1" represents ??
(1 Point)

No such file or directory

Operation not permitted

Argument list too long

No space left on device

Answer B

#### 18.
Hardware Interrupts are ____________ and Software interrupts are _______________________
(1 Point)

synchronous, synchronous

asynchronous, synchronous

synchronous, asynchronous

asynchronous, asynchronous


Answer B

#### 19.
Which of the following is the correct sequence in which the Interrupts are processed ??
(1 Point)

Interrupt Source -> Interrupt Controller -> Interrupt Vector -> Interrupt Service Request -> CPU

Interrupt Source -> Interrupt Controller -> CPU -> Interrupt Vector -> Interrupt Service Request

Interrupt Source -> Interrupt Vector -> Interrupt Service Request -> Interrupt Controller -> CPU 

Interrupt Source -> Interrupt Controller ->Interrupt Vector -> -> CPU-> Interrupt Service Request


Answer B

#### 20.
Which of the following is the default license for GNU linux ??
(1 Point)

BSD

MIT

Apache

GPL

Answer D

#### 21.
Which of the following is not a type of Operating System ??
(1 Point)

Batch Operating System

Time Sharing Operating System

Distributed Operating System

Network Operating System

Real Time Operating System

None of the above

Answer None of these

#### 22.
Ubuntu desktops are based on ??
(1 Point)

KDE

MATE

LXDE

GNOME

XFCE

Answer D

#### 23.
Which of the following is not a functionality provided by an Operating System ??
(1 Point)

Protection and Security

Process Management

Virtual File System

Memory Management

I/O Management

None of the above

Answer None Of These

#### 24.

How many number of lines would the below command print
dmesg | head -10 | tail -2

Note: Just write the number as answer 
(1 Point)

Answer 2



#### 25.

Which instruction helps in transitioning from user mode to kernel mode ??
(1 Point)

SUDO instruction

KERNEL instruction

BOOT instruction

TRAP instruction

Answer D

#### 26.

Which command can be used to check the contents of the root file system in linux ??
(1 Point)

ls /  

ls /root

ls /home/user

ls ~


Answer A

#### 27.

Considering the intel architecture, the ________________ bit decides if the control is in user space of kernel space.
(1 Point)
Answer  [ Mode , mode , Mode bit , mode bit ]
