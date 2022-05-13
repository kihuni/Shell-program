
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