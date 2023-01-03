/*Assignment No.6
batch CSE-2
question 18:
Write a program in C to show the usage of pointer to structure.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
/* function declaration */
void printBook( struct Books *book );
int main( )
{
    struct Books Book1;
    struct Books Book2;
    strcpy( Book1.title, "C Programming");
    strcpy( Book1.author,"Ruia ");
    strcpy( Book1.subject, "C Programming Tutorial");
    Book1.book_id = 6495407;
    strcpy( Book2.title, "Telecom ");
    strcpy( Book2.author, "Salnk");
    strcpy( Book2.subject, "Telecom  Tutorial");
    Book2.book_id = 6495700;
    /* print Book1 info by passing address of Book1 */
    printBook( &Book1 );
    /* print Book2 info by passing address of Book2 */
    printBook( &Book2 );
    return 0;
}
void printBook( struct Books *book )
{
    printf( "Book title : %s\n", book->title);
    printf( "Book author : %s\n", book->author);
    printf( "Book subject : %s\n", book->subject);
    printf( "Book book_id : %d\n", book->book_id);
}
