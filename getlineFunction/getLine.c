#include <stdio.h>
#include <stdlib.h>

int input(char *s, int length);

int main()
{
    // points to the memory where the input characters is stored
    char *buffer;

    //The size of the buffer
    size_t bufsize = 32;

    // This is used to hold the return value
    size_t characters;


    buffer = (char *)malloc(bufsize *sizeof(char));

        if(buffer == NULL)
            {
            perror("Unable to allocate buffer");
            exit(1);
            }
    printf("type something");
    characters = getline(&buffer, &bufsize, stdin);
    printf("%zu charaacters were read \n", characters);
    printf("You typed %s\n", buffer);
}