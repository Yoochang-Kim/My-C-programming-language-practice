#include <stdio.h>

typedef int MY_DATA[5];

int main()
{
    MY_DATA temp; /* int temp[5];라고 선언한 것과 같음 */
    /* int (*p)[5];라고 선언한 것과 같음.
       포인터 변수 p가 가리키는 대상의 크기는 MY_DATA,즉 int[5]이다.
    */
    MY_DATA *p;
    int arr[5] = {1,2,3,4,5}, i;
    p = arr;
    
    for(i = 0; i < 5; i++)
        printf("%d ",(*p)[i]);
}