#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    i = 2;
    printf("%032b\n", i);
    i = -1; 
    printf("%032b\n", i);
    return EXIT_SUCCESS;
}