#include <stdio.h>
#include <string.h>
struct Books{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

int main(void){

    struct Books Book1;
    struct Books Book2;

    /*Book1 specification*/
    strcpy(Book1.title,"Herry portal");
    strcpy(Book1.author,"James K");
    strcpy(Book1.subject,"novel");
    Book1.book_id = 0001;

    strcpy(Book2.title,"C tutorial");
    strcpy(Book2.author, "Yoochang Kim");
    strcpy(Book2.subject,"C programming");
    Book2.book_id = 0002;

    printf("Boo1 title : %s\n",Book1.title);
    printf("Boo1 author : %s\n",Book1.author);
    printf("Boo1 subject : %s\n",Book1.subject);
    printf("Boo1 id : %d\n",Book1.book_id);
    
    printf("Boo2 title : %s\n",Book2.title);
    printf("Boo2 author : %s\n",Book2.author);
    printf("Boo2 subject : %s\n",Book2.subject);
    printf("Boo2 id : %d\n",Book2.book_id);



    return 0;
}