#include<stdio.h>
#include<string.h>
struct Book{
    int prize;
    char bookName[10];
    char writerName[10];
}b1;
void main(){
struct Book b1;
b1.prize = 100;
strcpy(b1.bookName,"Wings of fire");
strcpy(b1.writerName,"A P J Abdul Kalam");
printf("%d\n",b1.prize);
printf("%s\n",b1.bookName);
printf("%s\n",b1.writerName);
}