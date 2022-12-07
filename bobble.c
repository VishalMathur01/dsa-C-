#include<stdio.h>

#define len 4

void display(int *arr)
{
    printf("The array :\n");
    for(int i=0; i<len; i++)
    printf("%d ",arr[i]);
    printf("\n");
}

void bubble_sort(int *arr)
{
    int temp;
    int flag=0;
    for(int i=0; i<len-1; i++)
    {
        flag=1;
        printf("currently on pass: %d \n", i+1);
        for(int j=0; j<len-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
            // temp=arr[j];
            // arr[j]=arr[j+1];
            // arr[j+1]=temp;
            arr[j]=arr[j]+arr[j+1];//a=a+b
            arr[j+1]=arr[j]-arr[j+1];//b=a+b-b
            arr[j]=arr[j]-arr[j+1];//a=a+b-a
            flag=0;
            }
        }
        if(flag)
        return;
    }
}
int main()
{    
    int arr[len];
    printf("Enter %d integers:\n", len);
    for(int i=0;i<len;i++)
    scanf("%d", &arr[i]);
    display(arr);
    bubble_sort(arr);
    display(arr);
    return 0;
}