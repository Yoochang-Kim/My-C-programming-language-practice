#include <stdio.h>

int main(void)
{
    void *p = NULL;
    int a = 4;
    printf("The size of pointer is %d\n",sizeof(p));
    p = &a;
    printf("%d\n",*(int*)p);
    return 0;
}
