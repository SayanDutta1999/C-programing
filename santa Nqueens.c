#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int count=0;
void print(int board[20], int n)
{
int i,j;

printf("\nSolution %d:\n",++count);
 
for(i=1;i<=n;++i)
  printf("\t%d",i);
 
for(i=1;i<=n;++i)
{
  printf("\n\n%d",i);
  for(j=1;j<=n;++j) 
  {
   if(board[i]==j)
    printf("\tQ"); 
   else
    printf("\t-");
  }
}
}
int place( int board[20],  int row,int column)
{

int i;
for(i=1;i<=row-1;++i)
{
 	if(( board[i] == column) || (abs( board[i] - column) == abs(i - row)))
   return 0;
  
}
 
return 1;
}
int queen(int board[20],  int row,int n)
{

int column;
for(column=1;column<=n;++column)
{
  if(place( board[20], row,column))
  {
   board[row]=column;
   if(row==n)
    print(board[20],n);
   else 
    queen(row+1,n);
}
}
return 1;
}

int main()
{
int count=0;

//int board[20];
 
printf(" N Queens Problem Using Backtracking");
printf("\nEnter number of Queens:");
scanf("%d",&n);
queen(1,n);
	printf("\nTotal number of solution:%d",count);
return 0;
}
 
