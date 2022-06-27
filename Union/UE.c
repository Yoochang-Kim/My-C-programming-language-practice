#include <stdio.h>
#include <string.h>

union Data{
    int i;
    float f;
    char str[20]; 
};
void printData(union Data *data){
    printf("data.i = %d\n",data->i);
    printf("data.f = %f\n",data->f);
    printf("data.str = %s\n",data->str);
}
int main(void)
{
    union Data data;

    data.i = 20;
    printf("data.i = %d\n",data.i);
    data.f = 20.44;
    printf("data.f = %.2f\n",data.f);
    strcpy(data.str,"Hello World");
    printf("data.str = %s\n",data.str);



    return 0;
}