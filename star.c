#include<stdio.h>
int main(){
    int i,j,k,n;

    printf("enter the number");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(k=1;k<=(n-1);k++){
            printf("");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=2;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}