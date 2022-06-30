#include <stdio.h>

int Sum(int a, int b)
{
    int result = 0;
    result = a + b;
    return result;
}
int main()
{
    //함수 포인터는 함수 원형(Function Prototype)을 사용해서 포인터를 선언해야 한다.
    int (*p)(int, int), result;
    /* 함수 포인터에 함수의 주소값을 저장 */
    p = Sum;
    result = (*p)(4,5); /* int result = Sum(4,5);과 같으므로 result에는 9가 저장 된다. */
    /* 출력 한다. */
    printf("%d\n",result);
}