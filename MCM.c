#include <stdio.h>

int mcm(int p[],int n)
{
	int m[100][100];

	int i,j,k,l,q;
	for (i=1;i<n;i++)
		m[i][i]=0;
	for (l=2;l<n;l++)
        {
		for (i = 1; i < n -l + 1; i++)
		{
			j = i + l- 1;
			m[i][j] = 999999;
			for (k =i;k <=j-1;k++)
			{
				q = m[i][k]+m[k+1][j] + p[i-1]*p[k]*p[j];
				if (q < m[i][j])
					m[i][j]=q;
			}
		}
	}

	return m[1][n-1];
}

int main()
{
	int size,i;
	int arr[100];
	scanf("%d",&size);
	for(i=0;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }



	printf("%d",
    mcm(arr, size+1));

	getchar();
	return 0;
}