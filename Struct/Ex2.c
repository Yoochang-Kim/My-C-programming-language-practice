#include <stdio.h>

/* struct People {
    char name[12];
    int age;
    float height;
    float weight;
};

typedef struct People Person; 
*/

typedef struct _person
{
    char name[12];
    int age;
    float height;
    float weight;
}Person;


int main(void)
{
    //struct People data; /* 일반 변수: data 변수의 크기는 22바이트 */
    // struct People friend_list[64]; /* 배열 변수: friend_list 변수의 크기는 22 * 64바이트 */
    // struct People *p; /* 포인터 변수: p 변수의 크기는 4바이트(People 자료형 주소 값 저장) */

    
    Person data; //= struct People data;
    Person friend_list[64]; //= struct People friend_list[64];
    Person *p; //= struct People *p;    
    

   p = &data;
   /* *p.age 는 오류-> * 연산자가 . 연산자보다 연산자 우선순위가 낮다. 
      따라서 괄호를 사용하여 * 연산자가 먼저 수행되도록 해야 한다. */
   (*p).age = 23; // == p->age = 23

   printf("%d\n",data.age);

}