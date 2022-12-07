#include<stdio.h>

int main()
{
    int arr[5], a[5], sum[10], i=0;
    printf("Enter sorted array 1:\n");
    for(;i<5;i++)
    scanf("%d", &arr[i]);
    printf("Enter sorted array 2:\n");
    for(i=0;i<5;i++)
    scanf("%d", &a[i]);
    for(i=0;i<10;i++)
    {
        if(i<5)
        sum[i]=arr[i];
        else
        sum[i]=a[i-5];
    }
    for(i=0; i<10;i++)
    {
        for(int j=0;j<10-i-1;j++)
        {
            sum[j]=sum[j]+sum[j+1];//a=a+b
            sum[j+1]=sum[j]-sum[j+1];//b=a+b-b
            sum[j]=sum[j]-sum[j+1];
        }
    }
    printf("The merged array::\n");
    printf("1 2 3 4 5 6 7 8 9 10");
    // for(i=0;i<10;i++)
    // printf("%d ", sum[i]);
    return 0;
}