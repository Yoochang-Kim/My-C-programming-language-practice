#include <stdio.h>

int Sum(int a, int b,void (*pa)(int *),void (*pb)(int *));
void MyAbsolute(int *p)
{
    if(*p < 0) *p = (*p) * (-1);
}
int main(int argc, char **argv)
{
    int result = Sum(-4,5, MyAbsolute,NULL);
    printf("%d\n",result);
}

int Sum(int a, int b, void (*pa)(int *), void (*pb)(int *))
{
    if(NULL != pa) (*pa)(&a); // = MyAbsolute(&a)
    if(NULL != pb) (*pb)(&b);

    return a + b;
}