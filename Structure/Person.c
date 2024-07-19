#include<stdio.h>
#include<String.h>
    struct Person
    {
        char name[10];
        int age;
        double salary;
        double mobile_number;

    }p1;
    void main(){
        struct Person p1;
         strcpy( p1.name,"vishal");
        p1.age = 67;
        p1.salary=47548754;
        p1.mobile_number = 932983472;
        printf("%d\n",p1.age);
        printf("%s\n",p1.name);
        printf("%lf\n",p1.salary);
        printf("%lf\n",p1.mobile_number);
    }
    
