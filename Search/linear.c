#include <stdio.h>
int linearSearch(int a[],int key,int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }       
    }
    return -1;
}
void main()
{
    int i, a[100], n, key;
    printf("how many number");
    scanf("%d", &n);
    printf("enter the number");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the key to be searched");
    scanf("%d", &key);
    int ans = linearSearch(a,key,n);
    if (ans == -1)
    {
        printf("element not found");
    }
    else
    {
        printf("element  found %d",ans+1);
    }
}

