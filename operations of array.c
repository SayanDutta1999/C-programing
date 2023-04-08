#include <stdio.h>
#include <stdlib.h>
 
int search(int arr[], int size, int key);
int insert(int arr[], int *size, int key); 
int delete(int arr[], int *size, int key);
void replace(int arr[], int size, int elm1, int elm2);
void reverse(int arr[], int size);
void show(int arr[], int size);
 
int main() {
    int arr[20];
  
    int i, size, key, elm1, elm2;
    int c;
    printf("Enter the number of elements of array :");
    scanf("%d", &size); 
        
    printf("Enter the elements of array :");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
     
    do {
        printf("\n\t*******  MENU  *******");
        printf("\n\t1 to search an element ");
        printf("\n\t2 to insert an element ");
        printf("\n\t3 to delete an element ");
        printf("\n\t4 to replace an element ");
        printf("\n\t5 to reverse the array ");
        printf("\n\t6 to show the elements ");
        printf("\n\tOther to exit ");
        printf("\n\tEnter your choice  :");
        scanf("%d", &c);
        switch (c) {
        case 1:
            printf("\nEnter the element to search :");
            scanf("%d", &key);
            search(arr, size, key);
            break;
        case 2:
            printf("\nEnter the element to insert at end :");
            scanf("%d", &key);
            insert(arr, &size, key);
            break;
        case 3:
            printf("\nEnter the element to delete :");
            scanf("%d", &key);
            delete(arr, &size, key);
            break;
        case 4:
            printf("\nEnter the array element & the element to be replaced with :");
            scanf("%d %d", &elm1, &elm2);
            replace(arr, size, elm1, elm2);
            break;
        case 5:
            printf("\nThe elements are : ");
            reverse(arr, size);
            show(arr, size);
            break;
        case 6:
            printf("\nThe elements are : ");
            show(arr, size);
            break;
        default:
            exit(-1);
        }
        printf("\nDo you want to run the programme ?(y/n)");
        scanf("%c", &c);
    } while (c != 'n'); 
}
  
int search(int arr[], int size, int key) {
    int i, flag;
    flag = 0;
    for(i = 0; i < size; i++)
    {
        if(key == arr[i])
        {
            flag = 1;
            break;
        }   
    }
    if (flag == 1)
        printf("The element is present");
    else
        printf("The element is not present");
    return (0);
}
 
int insert(int arr[], int *size, int key) {
    arr[*size] = key;
    (*size)++;
    return (0);
}
  
int delete(int arr[], int *size, int key) {
    int j, i;
    int loc, found = 0;
    for (i = 0; i < *size; i++) {
        if (arr[i] == key) {
            found = 1;
            loc = i;
        }
    }
    if (found) {
        for (i = loc; i < *size; i++)
            arr[i] = arr[i + 1];
        (*size)--; 
        arr[*size] = 0;
    }
    for (j = 0; j < *size; j++)
        printf("\t%d", arr[j]);
    return (0);
}
  
void replace(int arr[], int size, int elm1, int elm2) {
    int i;
    for (i = 0; i < size; i++)
        if (arr[i] == elm1)
            arr[i] = elm2;
     
    for (i = 0; i < size; i++)
        printf("\t%d", arr[i]);
}
  
void reverse(int arr[], int size) {
    int j, temp;
    for (j = 0; j < size /2; j++)
    {
        temp = arr[j];
        arr[j] = arr[size - 1 - j];
        arr[size - 1 - j] = temp;
    }   
}
 
void show(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("\t%d", arr[i]);
}  
