#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int maxSubStrings(char *str);
int main()
{
    char *str = "0100110101";
    // int len = strlen(str);
    printf(" ",maxSubStrings(str));
    return 0;
}
int maxSubStrings(char *str){
    int cnt = 0, count0 = 0, count1 = 0;
    for(int i = 0; str[i] != '\0'; i++){
        
        if(str[i] == '0'){
            count0++;
        }
        else{
            count1++;
        }
        if(count0 == count1){
            cnt++;
        }
    }
    if(count0 != count1){
        return -1;
    }
    
    return cnt;

}