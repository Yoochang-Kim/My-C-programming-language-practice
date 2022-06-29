#include<stdio.h>
#include <stdlib.h>
int compare (const void *, const void*);
// void qsort((void *base, size_t num, size_t width, int (*compare)(const void *, const void *))
int main(void)
{
    int arr[5] = {1,22,32123,41224,5};
    int num, width, i;

    num = sizeof(arr)/sizeof(arr[0]);
    width = sizeof(arr[0]);
    printf("%d\n",width);
    qsort((void*)arr, num, width, compare);
    for(i=0; i < 5; i ++)
        printf("%d ",arr[i]);
        
}

int compare(const void *elem1, const void *elem2){
    if((*(int*)elem1) == (*(int*)elem2)) return 0;
    else if((*(int*)elem1) < (*(int *)elem2)) return -1;
    else return 1;
}