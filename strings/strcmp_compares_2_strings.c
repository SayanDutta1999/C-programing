//strcmp compares 2 strings
#include<stdio.h>
#include<string.h>
int main()
{
	int  i, j, k;
	char string1[100] = "Jerry", string2[100] = "Ferry";
    i = strcmp(string1, string1);
    j = strcmp(string1, string2);
    k = strcmp(string1, "Jerry boy");
    printf("%d\n%d\n%d", i, j, k);
    return 0;


}
