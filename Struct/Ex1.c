#include <stdio.h>
#include <string.h>
struct Books{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};
void printBooks(struct Books *books);
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

    printBooks( &Book1 );
    printBooks( &Book2 );


    return 0;
}

void printBooks(struct Books *book)
{
    printf("Book title : %s\n", book->title);
    printf("Book author : %s\n", (*book).author);
    printf("Book subject : %s\n", (*book).subject);
    printf("Book id : %d\n", book->book_id);
}