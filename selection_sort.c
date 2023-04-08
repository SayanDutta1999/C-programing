#include<stdio.h>
#include<stdlib.h>
int smallest(int *, int, int);
void selection_sort(int *,  int);
int main()
{
    int i, j,  n,  *array, position;
    int swap, temp;
    printf("Enter the value of n:");
    scanf("%d", &n);
    array = (int *) malloc (n * sizeof(int));
    printf("Enter the number in the array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    //  for(i = 0; i < n - 1; i++)
    //  {
    //     position= i;
    //     for (j = i + 1; j < n; j++)
    //     {
    //        if(array[j] < array[position])

    //        {
    //            position = j;
    //        }
    //     }
    //     if(position != i)
    //     {
    //         swap = array[i];
    //         array[i] = array[position];
    //         array[position] = temp;
    //     }
        //}
    selection_sort(array, n);
    printf("Sorted array is:");
    for(i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}

int smallest(int *array, int k, int n)
{
    int  i, j, pos = k, small = array[k];
   
        
        for(j = k + 1; j < n; j++)
        {
            if(pos > array[j])
            {
                small = array[i];
                pos = j;
            }
        }
        return pos;
    
}

void selection_sort(int *array, int n)
{
    int k,  temp, small;
    for(k = 0; k < n; k++)
    {
        small = smallest(array, k,  n);
        temp = array[k];
        array[k] = array[small];
        array[small] = temp;

    }
}





