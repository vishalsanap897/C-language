#include<stdio.h>
#include<String.h>
struct Car{
    char name[10];
    int prize;
    int car_number;
}c1;
void main(){
    struct Car c1;
    strcpy(c1.name,"mahindra");
    c1.prize = 2000000;
    c1.car_number = 5648;
    printf("%s\n",c1.name);
    printf("%d\n",c1.prize);
    printf("%d\n",c1.car_number);
}