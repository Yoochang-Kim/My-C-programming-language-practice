#include <stdio.h>
int Sum(int a, int b)
{
    return a + b;
}

int Sub(int a, int b)
{
    return a - b;
}

int Mul(int a, int b)
{
    return a * b;
}

int Div(int a, int b)
{
    return a / b;
}
typedef int (*OP_TYPE)(int,int);

int main()
{
    /* int (*p[4])(int,int) = {Sum, Sub, Mul, Div}, i; */
    OP_TYPE p[4] = {Sum,Sub,Mul,Div};
    int i;
    char op_table[4] = {'+','-', '*', '/'};
    /* Sum, Sub, Mul, Div 순으로 호출함 */
    for(i = 0; i < 4; i++)
        printf("%d %c %d = %d\n", 9, op_table[i], 3, (*p[i])(9,3));


}