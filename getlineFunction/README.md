  ## getline function

  - Getline function is part of the c library and is used for reading string of text.

  - Here is a getline function expression

    `getline(&buffer, &size, stdin);`

  - The getline() is prototyped in the `stdio.h`header file.

  - simple explanation of the above function:

      &buffer is the address of the first character position where the input string will be store
          n/b The buffer points to the first character not the base address

      &size is the address of the variable that holds the sizze of the input buffer.

      stdin this is the input file handle.
         It's so that you could use the getline() to read a line of text from the file.
          
