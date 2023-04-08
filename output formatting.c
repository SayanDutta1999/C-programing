#include <stdio.h> 
 
int main(void)
{
    int m, n;
    printf("\nEnter an integer:\n");
    scanf("%d", &m);
    printf("m = %d", m);
 
    printf("\nEnter two integer:\n");
    scanf("%d %d", &m, &n);
    printf("m = %d n = %d ", m, n);
 
    printf("\nEnter two integer:\n");
    scanf("%d%d", &m, &n);
    printf("m = %d n = %d ", m, n);
 
    printf("\nEnter two integer:\n");
    scanf("%d\t%d", &m, &n);
    printf("m = %d n = %d ", m, n);
 
    printf("\nEnter two integer:\n");
    scanf("%da%d", &m, &n);
    printf("m = %d n = %d ", m, n);
 
    printf("\n");
    return 0;
}
  
