// using strcpy as  function call
#include<stdio.h>
#include<string.h>
void xstrcpy(char *, char *);
int main()
{
	char source[100], target[100];
    printf("Enter the string:");
    gets(source);
    xstrcpy(target, source );
    printf("source is:%s\n", source);
    printf("target is:%s\n", target);


}

void xstrcpy(char *t, char *s)
{
	while(*s != '\0')
	{
		*t = *s;
		s++;
		t++;
	}
	*t = '\0';
}
