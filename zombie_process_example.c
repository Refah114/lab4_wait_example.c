#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int pid;

    pid = fork();

    if (pid != 0)
    {
        printf("I am the parent with PID %d.\n", getpid());

        while (1)
            sleep(100);
    }
    else
    {
        printf("I am the child with PID %d.\n", getpid());

        exit(42);
    }

    return 0;
}
