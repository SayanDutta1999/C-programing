#include<stdio.h>
#include<stdlib.h>
int dublicate(int nums[], int n);
int main()
{
    int nums[] = {1,3,4,2,2}, i, j;
    int size = sizeof(nums) / sizeof(nums);
    printf("Dublicate: %d",  dublicate(nums, size));
    return 0;
}
int dublicate(int nums[], int n){
    int i, j;
    for ( i = 0; i < n + 1; i++)
    {
        
        for( j = i + 1; j < n + 1; j++){
            if (nums[i] == nums[j])
            {
                return nums[j];
            }
            
        }
    }
    
}