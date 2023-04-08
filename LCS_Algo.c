#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char LCS_Length(char *X, char *Y, int m, int n, int **c, char **b);
void print(int i, int j, char **b, char *X);




void print(int i, int j, char **b, char *X)
{
    if (i == 0 || j == 0)
    {
        return;
    }
    if (b[i][j] == 'C')
    {
        print(i - 1, j - 1, b, X);
        printf("%c", X[i - 1]);
    }
    else if (b[i][j] == 'L')
    {
        print(i - 1, j, b, X);
    }
    else
    {
        print(i, j - 1, b, X);
    }
       
    
}
char LCS_Length(char *X, char *Y, int m, int n, int **c, char **b)
{
    int  i, j;
   
    for(i = 1; i <= m; i++)
    {
        c[i][0] = 0;
    }
    for(j = 0; j <= n; j++)
    {
        c[0][j] = 0;
    }
    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(X[i - 1] == Y[j - 1])
            {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = 'C';
            }
            else if (c[i - 1][j] >= c[i][j - 1])
            {
                c[i][j] = c[i - 1][j];
                b[i][j] = 'U'; 
            }
            else
            {
                c[i][j] = c[i][j - 1];
                b[i][j] = 'L';
            }
            
        }
    }
    return &c;
}



int main()
{
    char *X, *Y, **b;
    int **c;
    int m, n, i;
	
    printf("Enter the  first string:");
	gets(X);
    m = strlen(X);
    X = (char *)malloc(m * sizeof(char));
    
    printf("\nEnter the second string:");
	gets(Y);
    n = strlen(Y);
    Y = (char *)malloc(n * sizeof(char));
    
    c = (int **) malloc (m * sizeof(int*));
    b = (char **)malloc(m * sizeof(int*));

    for(i = 0; i<= m; i++)
    {
        c[i] = (int *) malloc (n * sizeof(int ));
    }
    for(i = 0; i<= m; i++)
    {
        b[i] = (char *) malloc (n * sizeof(char ));
    }

    LCS_Length(X, Y, m, n, c, b);
    printf("\nThe Longest Common Subsequence is :\n");
    print(m, n, b, X);
    return 0;
}

//  AGGTAB 
// GXTXAYB