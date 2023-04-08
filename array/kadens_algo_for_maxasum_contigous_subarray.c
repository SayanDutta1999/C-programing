// time complexity is - O(N)
#include<stdio.h>
#include<stdlib.h>
int maxSubarraySum(int arr[], int n)
{
    int maxSum = 0;
    int curSum = 0;
    for (int i = 0; i < n; i++)
    {
        curSum += arr[i];

        if(curSum > maxSum){
            maxSum = curSum;
        }
        if (curSum < 0)
        {
            curSum = 0;
        }
        
    }
    return maxSum;
    
}
int main()
{
    int arr[] = {-5, -4, -2, -6, -1}, n;
    n = sizeof(arr) / sizeof(arr[0]);
    printf("Max subarray sum is: %d", maxSubarraySum(arr, n));
    return 0;
}