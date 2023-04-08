#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int main()
{
    int i, j, row, col;
    scanf("%d", &row);
    scanf("%d", &col);
    int arr[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    int count = 0, total = row * col;
    int minr = 0, minc = 0;
    int maxr = row - 1, maxc = col - 1;

    while (count < total)
    {
        // print Left wall top to bottom
        for(i = minr; i <= maxr && count < total; i++){
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++; 

         // print Bottum wall left to right
        for(j = minc; j <= maxc && count < total; j++){
            printf("%d ", arr[maxr][j]);
            count++;
        }
        maxr--; 

        // print Right wall bottom to top
        for(i = maxr; i >= minr && count < total; i--){
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;

        // print Top wall right to left
        for (j = maxc; j >= minc && count < total; j--)
        {
            printf("%d ", arr[minr][j]);
            count++;
        }
        minr++;
    }
    return 0;
}

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15