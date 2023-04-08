#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, n, pos, found = 0, *array, num;
    printf("Enter the value of n:");
    scanf("%d", &n);
    array = (int *) malloc (n * sizeof(int));
    printf("Enter the number in the array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the number that you want to find");
    scanf("%d", &num);
    for(i = 0; i < n; i++)
    {
        if(array[i] == num)
        {
            found = 1;
            pos = i;
            printf("NUmber found at position: %d", pos);
            break;
        }
       
    }
    if(found == 0)
    {
        printf("%d is Not found !!", num);
    }

    return 0;
}