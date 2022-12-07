#include<stdio.h>

#define len 5

void display(int *arr)
{
    printf("The array :\n");
    for(int i=0; i<len; i++)
    printf("%d ",arr[i]);
    printf("\n");
}

void selection_sort(int *arr)
{
    int index, temp;
    for(int i=0; i<len; i++)
    {
        index = i;
        for(int j=i+1; j<len; j++)
        {
            if(arr[j+1]<arr[j])
            index=j;
        }
            temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
    }
}

int main()
{    
    int arr[len];
    printf("Enter %d integers:\n", len);
    for(int i=0;i<len;i++)
    scanf("%d", &arr[i]);
    display(arr);
    selection_sort(arr);
    display(arr);
    return 0;
}