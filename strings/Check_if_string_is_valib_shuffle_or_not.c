#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str1 = "XY", *str2 = "12", *res = "X1Y2";
    int i = 0, j = 0, k = 0, f = 0;
    int s1 = strlen(str1);
    int s2 = strlen(str2);
    int resl = strlen(res);
    if ((s1 + s2) != resl)
    {
        printf("no");
    }
    else
    {    
        while(k < resl){
            if (i < s1 && str1[i] == res[k])
            {
                i++;
            }
            else if(j < s2 && str2[j] == res[k])
            {
                j++;
            }
            else
            {   
                f - 1;
                break;
            }
            k++;
            
        }
    }
    if (i < s1 || j < s2)
    {
        printf("not");
    }
    else
        printf("yes");
    return 0;
}