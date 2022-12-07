#include<stdio.h>
#define len 5

void display(int *arr)
{
    printf("The array: \n");
    for(int i=0; i<len; i++)
    printf("%d ", arr[i]);
    printf("\n");
}

void insertion_sort(int *arr)
{
    int key, j;
    for(int i=1; i<len; i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[len];
    printf("Enter 5 inter values for sorting:\n");
    for(int i=0; i<len; i++)
    scanf("%d", &arr[i]);
    display(arr);
    insertion_sort(arr);
    display(arr);
    return 0;
}