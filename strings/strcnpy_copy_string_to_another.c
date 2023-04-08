// strncpy copy string to another by checking the size of target array.
#include<stdio.h>
#include<string.h>
int main()
{
	char source[6] = "Hello";
    char target[5];
    
    strncpy(target, source, sizeof(target));
    target[sizeof(target) - 1] = '\0';
    // printf("source is:%s\n", source);
    printf("target is:%s", target);
    return 0;


}