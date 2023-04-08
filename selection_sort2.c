#include<stdio.h>
int main()
{
    int i, j,  n,  array[100], position, temp;
   
    printf("Enter the number of element:");
    scanf("%d", &n);
    printf("Enter the number in the array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for(i = 0; i < n - 1; i++)
    {
    	position = i;
        
        for(j = i + 1; j < n; j++)
        {
            if (array[position] > array[j])
            {
                position = j;
            }
        }
    	if (position != i)
		{
        	temp = array[i];
         	array[i] = array[position];
         	array[position] = temp;
    	}
    }
    printf("Sorted array is:");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;

}




