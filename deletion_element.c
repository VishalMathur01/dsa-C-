#include<stdio.h>
int main()
{
    int a[5], i=0, ele=0, location, arr[4];
    printf("Enter a 5 integer sorted array:\n");
    for(; i<5; i++)
    scanf("%d", &a[i]);
    printf("Enter the element you want to delete:\n");
    scanf("%d", &ele);
    printf("Array Entered:\n");
    for(i=0; i<5; i++)
    printf("%d ", a[i]);
    printf("\n");
    for(i=0; i<5; i++)
    {
        if(a[i]==ele)
        location=i;
    }
    for(i=0; i<location;i++)
    arr[i]=a[i];
    for(i=location; i<4; i++)
    arr[i]=a[i+1];
    printf("The new array:\n");
    for(i=0; i<4; i++)
    printf("%d ", arr[i]);
    return 0;
}
// 0 1 2 3 4 
// 2 5 1 7 6