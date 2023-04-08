#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  and, not, or, xor;
    char var;
    
    var = 3;
    and = (9 && 8);
    not = ~ 7;
    or = (8 || 9);
    xor = (7 ^ 4);
    printf("Answer of AND operation is:%d\n", and);
    printf("Answer of NOT operation is:%d", not);
    printf("\nAnswer of OR operation is:%d", or);
    printf("\nAnswer of XOR operation is:%d", xor);
    // in left shifting 3<<1 means 3 * 2^1, 1 is left hand operand of left shift operator.
    printf("\nAnswer of left shift operation is:%d", var<<1);
    // in right shifting 3<<1 means 3 / 2^1, 1 is left hand operand of right shift operator.
    printf("\nAnswer of right shift operation is:%d", var>>1);
    return 0;
}