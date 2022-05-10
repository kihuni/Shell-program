#include <stdio.h>
#include <string.h>

int main()
{
    int tokeNum = 0;
    
    char src[] = "Hello,,World!";
    
    const char delimiters[] = ", !";
    
    // calling strtok with the string and the delimiter
   char *token = strtok(src, delimiters);
    
    while(token != NULL)
    {
        printf("%d: [%s]\n", ++tokeNum, token);
        token = strtok(NULL, delimiters);
    }
}
