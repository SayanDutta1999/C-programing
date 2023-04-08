#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row, col, i, j, g;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (g = 0; g < row; g++)
    {
        for (i = 0 , j = g; j < row; i++, j++)
        {
            printf("\n");
            printf("%d\n", arr[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}