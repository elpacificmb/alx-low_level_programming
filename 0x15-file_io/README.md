# 0x15. C - File I/O
> ## Foundations - Low-level programming & Algorithm ― Linux and Unix system programming

### General

* Look for the right source of information online
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What are file permissions, and how to set them when creating a file with the open system call
* What is a system call
* What is the difference between a function and a system call

### File descriptor

In Unix and related computer operating systems, a file descriptor (FD, less frequently fildes) is an abstract indicator (handle) used to access a file or other input/output resource, such as a pipe or network socket. File descriptors form part of the POSIX application programming interface. A file descriptor is a non-negative integer, generally represented in the C programming language as the type int (negative values being reserved to indicate "no value" or an error condition).

Each Unix process (except perhaps a daemon) should expect to have three standard POSIX file descriptors, corresponding to the three standard streams:

|Integer value|	  Name	 | <unistd.h> symbolic constant| <stdio.h> file stream|
| ----------- | -------- | -------------------------- | --------------------- |
|0	|Standard input	|  STDIN_FILENO	 |     stdin|
|1	|Standard output|	  STDOUT_FILENO	  |    stdout|
|2	|Standard error|	  STDERR_FILENO	  |    stderr|

