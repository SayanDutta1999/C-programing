#include<stdio.h>
#include<stdlib.h>
void func(int *A){ // Argument 1 - D array of Integers and for 2 - D array is int (*B)[3] or int B[][3] or we say **B
                    // For 3 - D array int (*C)[2][2] or C[][2][2] or we say ***C.
}
int main()
{
    int C[3][2][2] = {{{2, 3}, {7, 9}},
                      {{3, 4}, {6, 1}},
                      {{0, 8}, {11, 13}}};
    int A[2] = {1, 2};
    int B[2][3] = {{2, 4, 6}, {5, 7, 8}}; // B returns int (*)[3]
    func(A); // A returns int*
    // printf("%d %d %d\n", C, *C, C[0], C[0][0]); // Frist element base address
    // printf("%d", *(C[0][0] + 1)); // Frist element base address
    return 0;
}