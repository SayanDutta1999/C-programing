#include<stdio.h>
#include<stdlib.h>

void hanoi(int, char, char, char);

int main()
{
    int n;
    printf("Enter number of rings:");
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
void hanoi(int n, char x, char y, char z)
{
    if (n > 0)
    {
        
        hanoi(n -1, x, z, y);
        printf("\nMove from %c to %c", x, y);
        hanoi(n - 1, z, y, x);
    }
}
