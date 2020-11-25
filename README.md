# Simple Shell
___
![alt text](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)

## Description
___
Simple shell is a simple UNIX command interpreter that produce a similar output
to the normal BASH.
## Learning objective
___

- Who designed and implemented the original Unix operating system
- Who wrote the first version of the UNIX shell
- Who invented the B programming language (the direct predecessor to the C programming language)
- Who is Ken Thompson
- How does a shell work
- What is a pid and a ppid
- How to manipulate the environment of the current process
- What is the difference between a function and a system call
- How to create processes
- What are the three prototypes of main
- How does the shell use the PATH to find the programs
- How to execute another program with the execve system call
- How to suspend the execution of a process until one of its children terminates
- What is EOF / “end-of-file”?
## Requirement
___ 
- All programs and functions are compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.
- All files are compiled on Ubuntu 14.04 LTS.

## Allowed function

- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

## Files
___
### Mandatory
[0-README.md, man, AUTHORS]
- [README.md](https://github.com/JennyHadir/simple_shell/blob/master/README.md)
- [man_1_simple_shell](https://github.com/JennyHadir/simple_shell/blob/master/man_1_simple_shell)
- [AUTHORS](https://github.com/JennyHadir/simple_shell/blob/master/AUTHORS)

[simple_shell.c](https://github.com/JennyHadir/simple_shell/blob/master/simple_shell.c) : main function of a micro shell that contain 3 function read, parse line and execute it

[read_buff.c](https://github.com/JennyHadir/simple_shell/blob/master/read_buff.c) : read the command line typed by the user

[parse_buff.c](https://github.com/JennyHadir/simple_shell/blob/master/parse_buff.c) : split the command line typed by the user to a command and argument

[execute.c](https://github.com/JennyHadir/simple_shell/blob/master/execute.c) : execute the command line
[shell.h](https://github.com/JennyHadir/simple_shell/blob/master/shell.h) : Header that contain all function used in this program
[strfunc.c](https://github.com/JennyHadir/simple_shell/blob/master/strfunc.c) : strfunc contain some string function used in the parse_buff function