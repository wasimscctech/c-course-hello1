#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

int main()
{   
    unsigned int ua; 
    int a;
    float b;
    char c;
    double d;
    short s;
    long l;
    long long lo;
    long double ld; 
    unsigned long long ull; 
    int x, y;
    uintmax_t am;
    am = (uintmax_t)x*y; 
    printf("Size of unsigned int %zu\n", sizeof(ua)); //4
    printf("Size of int %zu\n", sizeof(a)); //4
    printf("Size of float %zu\n", sizeof(b)); //
    printf("Size of char %zu\n", sizeof(c));
    printf("Size of double %zu\n", sizeof(d));
    printf("Size of short %zu\n", sizeof(s));
    printf("Size of long %zu\n", sizeof(l));
    printf("Size of long long %zu\n", sizeof(lo));
    printf("Size of long double  %zu\n", sizeof(ld));
    printf("Size of unsighed long long %zu\n", sizeof(ull));

return EXIT_SUCCESS;
}