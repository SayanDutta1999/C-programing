#include<stdio.h>
int main()
{
    int numbers[100], i, n, res = 0;
 
    printf("Enter number of elements: ");
    scanf("%d", &n);
     
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
     
    for(i = 0; i < n; i++)
    {
        res = res + numbers[i];
    }
     
    printf("The sum of nuebers is : %d\n", res);
    printf("The average of nuebers is : %f\n", ( (float) res / n));
     
    return 0 ;
}

