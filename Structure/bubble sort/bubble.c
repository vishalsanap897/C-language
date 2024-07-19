#include<stdio.h>
void bubble_sort(int arr[],int n){

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;


        }
    }
}
}
int main(){
    int n;

    printf("enter the size of an array\n");
    scanf("%d",&n);


    int arr[45];



    printf("enter element of array\n",n);
    for(int i=0;i<n;i++){
        printf("element %d\n",i);
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr ,n);
    printf("sorted array\n: ");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}