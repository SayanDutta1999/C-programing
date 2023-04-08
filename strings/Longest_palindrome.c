#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void longestPalindrome(char str[], char s[]);
int main()
{
    char *str = "aaaabbaa";
    char *s = "aabbaa";
    longestPalindrome(str, s);
    return 0;
}
void longestPalindrome(char str[], char s[])
{
    int len1, len2, i, j, k;
    char *temp, *temp1;
    len1 = strlen(str);
    len2 = strlen(s);
    for(i = len1 - 1; i >= 0; i--){
        for(j = 0; j < len1; j++){
            temp[j] = str[i];
        }
    }
    for(i = 0; str[i + len2 - 1]; i++){
        k = i;
        for(j = 0; j < len2; j++){
            if (temp[k] != s[j])
            {
                break;
            }
            temp1[j] = temp[k];
            k++;
        }
        if(j == len2)
            for(i = 0; i < len1; i++){
                printf("%c", temp1[i]);
            }
    }
   
   

}