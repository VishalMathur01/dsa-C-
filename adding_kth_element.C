#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5], i=0, location=0, element, piss[20], of=0;
    printf("Enter an array of 5:\n");
    for(; i<5; i++)
    scanf("%d", &arr[i]);
    printf("The array given as input:\n");
    for(i=0; i<5; i++)
    printf("%d ", arr[i]);
    printf("\n");
    printf("Enter the location after which and the element you want to search: \n");
    scanf("%d", &location);
    scanf("%d", &element);
    if(location>=5)
    {
        printf("The entered location is out of the range of the elements present in the array:");
        return 0;
    }
    else
    {
        for(i=0; i<location-1; i++)
        {
            piss[i] = arr[i];
            of=i+1;
        }
        piss[location-1]=element;
        for(i = of; i<5; i++)
        {
            of++;
            piss[of]=arr[i];
        }
    printf("The array after adding the element:\n");
    for(i=0; i<6; i++)
    printf("%d ", piss[i]);
    return 0;
    }
}