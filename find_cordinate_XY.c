#include<stdio.h>
#include<stdlib.h>
int main()
{
    int col1, col2;
    printf("TEST DATA:");
    scanf("%d %d", &col1, &col2);
    if (col1 > 0 && col2 > 0)
    {
        printf("The coordinate point (%d, %d) lies in the First quadrant.");
    }
    else if (col1 < 0 && col2 > 0)
    {
        printf("The coordinate point (%d, %d) lies in the Second quadrant.");

    }
    
    
    
    return 0;
}