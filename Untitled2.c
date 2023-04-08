                 
#include <stdio.h>
 
int fact (int n);
 
int main (void)
{
    int i, n, r, p, res = 0;
    printf("Series!!!\n");
    printf("Enter values of n, r, p");
    scanf("%d %d %d", &n, &r, &p);
     
    if (r <= p && p <= n)
    {
        /* write the logic */
        for (i = r; i <= p; i++)
        {
            res = res + fact (n) / (fact (i) * fact (n-i)); 
        }
        printf("The result is %d\n", res);
    }
    else
    {
        printf("Invalid input.");
    }
    return 0;
}
 
int fact (int f)
{
    int i, res = 1;
    for (i = 2; i <= f; i++)
    {
        res = res * i;
    }
    return res;
}
    
