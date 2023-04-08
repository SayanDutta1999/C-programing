#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isRotated(char* , char*);
int main()
{
    char *str1 = "AACD";
    char *str2 = "ACDA";
    if(isRotated(str1, str2)){
        printf("The String is rotated");
    }
    else{
        printf("The String is not rotated");
    }
    return 0;
}

int isRotated(char *str1, char *str2){
    char *temp;
    void *ptr;
    int size1 = strlen(str1);
    int size2 = strlen(str2);

    if(size1 != size2){
        return 0;
    }

    temp   = (char *)malloc(sizeof(char)*(size1*2 + 1));
    temp[0] = '\0';
    strcat(temp, str1);
    strcat(temp, str1);

    ptr = strstr(temp, str2);

    free(temp);

    if(ptr != NULL){
        return 1;
    }
    else{
        return 0;
    }
}