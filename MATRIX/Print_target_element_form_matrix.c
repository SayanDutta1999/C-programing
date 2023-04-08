#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int row = 5, col = 4;
    int target, i, j, k;
    int low = 0;
    int high = (row * col) - 1;
    int mid = (low + (high - low)) / 2;
    int arr[row][col] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };
    scanf("%d", &target);
    
    while (low < high)
    {
        if (arr[mid / col][mid % col] == target)
        {
            printf("%d %d", (mid / col), (mid % col));
            break;
        }
        else{
            printf("not found");
        }
        if (arr[mid / col][mid % col] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

    }
    return 0;
}

    
