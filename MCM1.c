#include<stdio.h>
#include<stdlib.h>
int   Matrix_Chain_Order(int *, int);
void Print_Optimal_Parenthis();

#define MAX 9999999
int main()
{
    int *P, n;

    printf("enter the size of P");
    scanf("%d", &n);
    P = (int *) malloc (n * sizeof(int));
    int size = sizeof(P) / sizeof(P[0]);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", P[i]);
    }
    
    printf("Minimum number of multiplications required for the matrices multiplication is %d ",    Matrix_Chain_Order(P, size - 1));
   
  
   return 0;

}

int  Matrix_Chain_Order(int *P, int size)
{
    int n, **s, i, j, k, l, q;
    n = size;
    int m[n][n];
    for(i = 1; i <= n; i++)
    {
        m[i][i] = 0;
    }
    for (l = 2; l <= n; l++)
    {
        for(i = 1; i <= n - l + 1; i++)
        {
            j = i + l - 1; 
            m[i][j] = MAX;
            for(k  = i; k <= j - 1; k++)
            {
                q = m[i][k] + m[k + 1][j] + P[i - 1] * P[k] * P[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    
                }
                
            }
        }
    }
    return *m;
    
}
