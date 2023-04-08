#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[10], str2[10];
    int flag = 0;
    printf("Enter string:-");
    fgets(str, sizeof(str), stdin);
    for(int i = strlen(str) - 1; i > 0; i--){
        for(int j = 0; j < strlen(str); j++){
            str2[j] = str[i];
        }
        if (str2[i] == str[i])
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("String is palindrome");
    }
    else
        printf("String is not palindrome");
    

    
    return 0;
}