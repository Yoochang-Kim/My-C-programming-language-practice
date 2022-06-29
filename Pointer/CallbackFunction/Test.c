#include <stdio.h>

void com(int *pa, int *pb);
int test(int a, int b, void (*com)(int *,int *));
int main(void)
{
    int a = 8;
    int b = 7;
    test(a,b,com);
}
int test(int a, int b, void (*com)(int *, int *))
{
    (*com)(&a, &b);
}
void com(int * pa, int * pb)
{
    if(*pa > *pb)
        printf("a가 b보다 크다.\n");

    else{
        printf("a가 b보다 작거나 같다\n");

    }
}

