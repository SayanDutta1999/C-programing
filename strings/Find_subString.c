#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int findSubString(char str[], char s[]);
int main()
{
    int index;
    index = findSubString("abbaabbaaabba", "aabb");
    if(index == -1)
        printf("Substring not found");
    else
        printf("Substring found at %d", index);
    return 0;
}
int findSubString(char str[], char s[]){
    int i, j, k;
    int length = strlen(s);
    for(i = 0; str[i + length - 1]; i++){
        k = i;
        for(j = 0; j <= length - 1; j++){
            if(str[k] != s[j]){
                break;
            }
            k++;
        }
        if(j == length){
            return i;
        }
    }
    return -1;

}