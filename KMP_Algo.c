#include<stdio.h>
#include<string.h>
int KMP(char T[100], char P[100], int, int);
int prefix_function( char P[100], int);
int main()
{
	char T[100], P[100];
	int n, m;
	printf("Enter the  text:");
	gets(T);
	printf("\nEnter the pattern:");
	gets(P);
	
	
	KMP(T, P, n, m);
}


int KMP(char T[100], char P[100], int n, int m)
{
	int q;
	
	n = strlen(T);
	m = strlen(P);

	
    prefix_function(P, m);
	q = 0;
	int pi[m];
	for(int i = 1; i <= n; i++)
	{
		while(q > 0 && P[q+1] != T[i])
		{
			q = pi[q];
		}
		if(P[q + 1] == T[i])
		{
			q += 1;
		}
		if(q == m)
		{
			printf("Pattern occours with shift %d", i-m);
				q = pi[q]; 
		}
		
	}

	
 
}

int prefix_function( char P[100], int m)
{
	int  k;
	
	m = strlen(P);
	int pi[m];
	pi[1] = 0;
	k = 0;
	

	for(int q = 2; q <= m; q++)
	{
		
		while(k > 0 && P[k + 1] != P[q])
		{
			k = pi[k];
		}
		if(P[k + 1] == P[q])
		{
			k += 1;
		}
		pi[q] = k;
		
	}
	return *pi;
}


// T = aababc
// p = ababc











