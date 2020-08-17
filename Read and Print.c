// This program is about how to read the data from input and after that how to print the data after reading it.
/*There are in total 3 methods are there to READ the INPUT and PRINT the OUTPUT.
  1.getchar() and putchar():
    -this method will read first character of string and print it.
  2.gets() and puts() func:
    -this method will read the provided string and print it.But it will read until a new line.
  3.scanf() and printf() func:
    -this is the best method to read and print the string.
*/
// implementation and explanation of 3rd method:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);      // Read from stdout lib,it is already provided in it is that (Welcome to C programming!).
  	printf("Hello, World!\n");   // print the given string.
    printf("%s",s);              // print the provided string.
    return 0;
}

// Output:
/*
Hello, World!
Welcome to C programming!
*/
