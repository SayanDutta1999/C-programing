#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row, row_no, column;
    char ch= 64;
    char ch1 = 65;
    printf("Enter the number of rows : ");
    scanf("%d", &row_no);
    for (row = 1; row <= row_no; row++)
    {
        for( column = 1; column <= row; column++ )
        {
            printf("* ", column);
        }
        printf("\n");
    }
    printf("\n------------------\n");
/*
output

*     
* *   
* * * 
* * * * 
* * * * *

*/

   for (row = row_no; row >= 1; row--)
    {
        for( column = 1; column <= row; column++ )
        {
            printf("* ", column);
        }
        printf("\n");
    }
    printf("\n------------------\n"); 
/*
output

* * * * *
* * * * 
* * * 
* *  
* 

*/
    for (row = 1; row <= row_no; row++)
    {
        for( column = 1; column <= row; column++ )
        {
            printf("* ", column);
        }
        printf("\n");
    }
    
    for (row = row_no - 1; row >= 1; row--)
    {
        for( column = 1; column <= row; column++ )
        {
            printf("* ", column);
        }
        printf("\n");
    }
    printf("\n------------------\n"); 
/*
OUtput

*       
* *     
* * *   
* * * * 
* * *   
* *     
*

*/
    // print alpha bet as pattern
    for (row = 1; row <= row_no; row++)
    {
        for( column = 1; column <= row; column++ )
        {
            printf("%c ", (ch + column));
        }
        printf("\n");
    }
    
    for (row = row_no - 1; row >= 1; row--)
    {
        for( column = 1; column <= row; column++ )
        {
            printf("%c ", (ch + column));
        }
        printf("\n");
    }
    printf("\n------------------\n");
/*
Output
A
A B
A B C
A B C D
A B C D E
A B C D
A B C
A B
A

 
 */
       for (row = 1; row <= row_no; row++)
    {
        for( column = 1; column <= row; column++ )
        {
            printf("%c ", (ch + row));
        }
        printf("\n");
    }
    
    for (row = row_no - 1; row >= 1; row--)
    {
        for( column = 1; column <= row; column++ )
        {
            printf("%c ", (ch + row));
        }
        printf("\n");
    }
    printf("\n------------------\n");
/*
Output

A
B B
C C C 
D D D D
E E E E E
D D D D
C C C
B B
A

*/
      for (row = 1; row <= row_no; row++)
    {
        for( column = 1; column <= row; column++ )
        {
            printf("%c ", (ch1++));
        }
        printf("\n");
    }
    
    for (row = row_no - 1; row >= 1; row--)
    {
        for( column = 1; column <= row; column++ )
        {
            printf("%c ", (ch1++));
        }
        printf("\n");
    }
    printf("------------------");
/*
Output

A
A B
C D E
F G H I
J K L M N
O P Q R
S T U
V W
X

*/
    
    return 0;
}