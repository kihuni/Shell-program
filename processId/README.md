A process is an instance of an executing program that has an unique ID, which many function and system calls use this ID to interact with and manipulate processes.

This programs retrieve the current process id using system call getpid(child) and getppid(parent) .Every time the program is runned a new process is created and its ID is different.
