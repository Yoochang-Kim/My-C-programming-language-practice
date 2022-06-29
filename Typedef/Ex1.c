#include<stdio.h>
#include<string.h>
typedef struct Students{
    int korean;
    int english;
    char name[50];
}Student;
int main(void){
    Student kim;

    kim.korean = 100;
    kim.english = 100;
    strcpy(kim.name,"Yoochang Kim");

    printf("kim.korean = %d\n",kim.korean);
    printf("kim.english = %d\n",kim.english);
    printf("kim.name = %s\n",kim.name);
    return 0;
}