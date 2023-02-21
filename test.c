#include <stdio.h>

void main()
{
    char *ptr = "CU Canlpus";
    printf("%c", *&*&*ptr);
}

// is the output ofthis code?
// int maino
// { char *ptr = "CU Canlpus";
// *&*&*ptr);
// return 0;}
// 1.
// 2.
// 3.
// 4.
// Compiler Error
// Garbage Value
// Runtime Error
// c