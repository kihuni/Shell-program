## strtok function

    strtok function breaks a string into a small string/tokens using a set of delimiters

- The above code, breaks a given string into two and output them in different lines

        To use strtok function we are including #include <string.h> header file on the top

        Then, we are declairing variable toknum to hold the count of each line(for the purpose of viewing. its not necessary)

        Next, we declare the src[] array to hold the string.

        Next, we declare the delimiter varible to hold the delimiters

        Then, we call the strtok function, passing in the src variable which is holding the string and the delimiters variable which is holding the delimiters.

        Next, we use while loop to print the tokens while the token is not equal to NULL.

        Then, in the loop we also call the strtok function again, here passing NULL and delimiters. In order not to tokenize the same string again

        N/b If the same source string is passed then the first token will instead be re-tokenized

The output will be:

        1: [Hello]
        2: [World]