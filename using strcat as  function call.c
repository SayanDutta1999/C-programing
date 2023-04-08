// using strcat as  function call
#include<stdio.h>
//#include<string.h>
//void xstrcat(char , char );
void xstrcat(char t[100], char s[100])
{
	int i, index = 0;
	for(i = 0; i < 100; i++)
	{
		while(s[i] != '\0' && t[i] != '\0' )
		{
			t[index] = s[i];
			index++;
		}
		
	}
	t[100] = '\0';
	
}
int main()
{
	char source[100], target[100];
    printf("Enter the souce string:");
    gets(source);
    printf("Enter the target string:");
    gets(target);
    xstrcat(target, source );
    //printf("source is:%s\n", source);
    printf("target is:%s\n", target);


}

