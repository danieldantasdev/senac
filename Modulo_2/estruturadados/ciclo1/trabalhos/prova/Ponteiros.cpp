/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() 
{
    // printf("Hello World");
    // int *pt;
    // pt = &a;
    // *pt = 5;

    int a, *pt;
    pt = &a;
    
    int a = 5, *p;
    p = &a;
    printf("a = %d\n\n", a);

    *p = 10;
    printf("a = %d", a);

    return 0;
}
