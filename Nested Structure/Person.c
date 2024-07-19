#include<stdio.h>
#include<string.h>
struct Person{
char name[10];
int age;
double phoneNo;
};
struct Car{
    char company[10];
    int prize;
    struct Person p1;
}c1;
void main(){
    strcpy(c1.company,"baap comapny");
    c1.prize = 2354;

    strcpy(c1.p1.name,"vishal");
    c1.p1.age = 19;
    c1.p1.phoneNo = 374273632783;

 
    printf("%s\n",c1.company);
    printf("%d\n",c1.prize);
    printf("%s\n",c1.p1.name);
    printf("%d\n",c1.p1.age);
    printf("%lf\n",c1.p1.phoneNo);

}

