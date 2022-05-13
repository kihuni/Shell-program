## What is execve system call

    The exec system call, its used to execute a file in an active process

- When the execve system call is called the existing running file is replaced with new file in the same process space.
The PID remains the same.

![exec system call process](https://github.com/kihuni/Shell-program/blob/main/execve/Exec()%20System%20Call.png)

## Syntax
 
 - To use execve system call you have to use `#include <unistd.h> header 

        int execve(const char *pathname, char const *argv[], char const *envp[]);

- The first parameter constains the file pathname and must be binary executable or the script starting with a line of the form

- The second on is the array of arguments strings, the first of this strings `argv[0]` should contain the file name associate with the file being executed and it include a null pointer at the end
        char *args[] = {"./activeProgram2, NULL}

- The third argumentsis envp, its an arrar of strings, conventionally of the form key=value which are passed as environment to the new program. it also end with null pointer.

To read more `man 2 execve`

## Example

- When you have a 2 files, one running, lets call it exec.c and the second one sample.c:

        #include <stdio.h>
        #include <unistd.h>

            int main()
            {
                printf("I am exec.c\n");
                printf("PID of exec.c is %d\n", getpid());
                char *args[] = {"./sample", NULL};
                execv(args[0], args);
                printf("coming back to exec.c"); //this will not be executed
                return 0;
            }

  The code above, we are printing "I am exec.." to show we are in the exec.c file, then we get the PID of the running process

  Next, we are adding the sample file(executable) to the array of characters `char *args[] = {"./sample", NULL};` including a NULL pointer at the end