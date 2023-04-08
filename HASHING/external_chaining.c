#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
#include<stdbool.h>
#define MAX_NAME 100
#define TABLE_SIZE 10
typedef struct person
{
    char name[MAX_NAME];
    int age;
    struct person *next;
}person;

person * Hash_Table[TABLE_SIZE];

unsigned int hash1(){
     return 5; // For this obtain 5 from this function for each name.so it is not good Hash function.
}
unsigned int hash(char *name){
    int length = strnlen(name, MAX_NAME); // this function  not scan the length beyond maxlength.
    int i, hash_value = 0;
    for(i = 0; i < length; i++){
        hash_value += name[i];
        hash_value = (hash_value * name[i]) % TABLE_SIZE ;
    }
    return hash_value;
}

void init_hash_table(){
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        Hash_Table[i] = NULL;
    }
    // table is empty
}

void print_table(){
    printf("\nStart\n");
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (Hash_Table[i] == NULL)
        {
            printf("\t%i\t----\n", i);
        }
        else
        {
            printf("\t%i\t%s\n", i, Hash_Table[i]->name);
            person *tmp = Hash_Table[i];
            while(tmp != NULL){
                printf("%s - ", tmp->name);
                tmp = tmp->next;
            }
            printf("\n");
        }
        
    }
    printf("\nEnd\n");
    
}


bool hash_table_insert(person *p){
    if (p == NULL) return false;
    int index = hash(p->name);
    p->next = Hash_Table[index];
    Hash_Table[index] = p;
    return true;
}

person *hash_table_lookup(char* name){
    int index = hash(name);
    person *tmp = Hash_Table[index];
    while (tmp != NULL && strncmp(tmp->name, name, TABLE_SIZE) != 0)
    {
        tmp = tmp->next;
    }
    return tmp;
    
}

person *hash_table_delete(char * name){
      int index = hash(name);
    person *tmp = Hash_Table[index];
    person *prev = NULL;
    while (tmp != NULL && strncmp(tmp->name, name, TABLE_SIZE) != 0)
    {
        prev = tmp;
        tmp = tmp->next;
    }
    if (tmp == NULL) return NULL;
    if (prev == NULL)
    {
        // Deleting the head
        Hash_Table[index] = tmp->next;
    }
    else{
        prev->next = tmp->next;
    }
    return tmp;
}

int main()
{
    init_hash_table();
    

    person Jacob= {.name = "Jacob", .age = 21};
    person Sayan = {.name = "Sayan", .age = 22};
    person Jit = {.name = "Jit", .age = 20};
    person Pritam = {.name = "Pritam", .age = 15};
    person Surojit = {.name = "Surojit", .age = 17};
    person Bose = {.name = "Bose", .age = 18};
    person Rimpa = {.name = "Rimpa", .age = 19};
    person Ayan = {.name = "Ayan", .age = 26};
    person Premangshu = {.name = "Premangshu", .age = 25};
    person Logan = {.name = "Logan", .age = 250};
    
    hash_table_insert(&Jacob);
    hash_table_insert(&Sayan);
    hash_table_insert(&Jit);
    hash_table_insert(&Pritam);
    hash_table_insert(&Surojit);
    hash_table_insert(&Bose);
    hash_table_insert(&Rimpa);
    hash_table_insert(&Ayan);
    hash_table_insert(&Premangshu);
    hash_table_insert(&Logan);
    
    print_table();
  
    person *tmp;
    
    // JACOB
    tmp = hash_table_lookup("Jacob");
    if (tmp == NULL)
    {
        printf("Not found\n");
    }
    else{
        printf("Found %s.\n", tmp->name);
    }
    
    // SAYAN
    tmp = hash_table_lookup("Sayan");
    if (tmp == NULL)
    {
        printf("Not found\n");
    }
    else{
        printf("Found %s.\n", tmp->name);
    }
    
    // JIT
    tmp = hash_table_lookup("Jit");
    if (tmp == NULL)
    {
        printf("Not found\n");
    }
    else{
        printf("Found %s.\n", tmp->name);
    }

    // PRITAM
    tmp = hash_table_lookup("Pritam");
    if (tmp == NULL)
    {
        printf("Not found\n");
    }
    else{
        printf("Found %s.\n", tmp->name);
    }
        
    // SUROJIT
    tmp = hash_table_lookup("Surojit");
    if (tmp == NULL)
    {
        printf("Not found\n");
    }
    else{
        printf("Found %s.\n", tmp->name);
    }
    
    // BOSE
    tmp = hash_table_lookup("Bose");
    if (tmp == NULL)
    {
        printf("Not found\n");
    }
    else{
        printf("Found %s.\n", tmp->name);
    }
    
    // RIMPA
    tmp = hash_table_lookup("Rimpa");
    if (tmp == NULL)
    {
        printf("Not found\n");
    }
    else{
        printf("Found %s.\n", tmp->name);
    }
    
    // AYAN
    tmp = hash_table_lookup("Ayan");
    if (tmp == NULL)
    {
        printf("Not found\n");
    }
    else{
        printf("Found %s.\n", tmp->name);
    }
    
    // PREMANGSHU
    tmp = hash_table_lookup("Premangshu");
    if (tmp == NULL)
    {
        printf("Not found\n");
    }
    else{
        printf("Found %s.\n", tmp->name);
    }
   
    
    // LOGAN
    // hash_table_delete("Logan");
    tmp = hash_table_lookup("Logan");
    if (tmp == NULL)
    {
        printf("%s Not found\n", tmp->name);
    }
    else{
        printf("Found %s.\n", tmp->name);
    }
    
      
    print_table();
    
    // TRY set
    printf("\n");
    printf("\nJacob => %u\n", hash("Jacob"));
    printf("Sayan => %u\n", hash("Sayan"));
    printf("Jit => %u\n", hash("Jit"));
    printf("Pritam => %u\n", hash("Pritam"));
    printf("Surojit => %u\n", hash("Surojit"));
    printf("Bose => %u\n", hash("Bose"));
    printf("Rimpa => %u\n", hash("Rimpa"));
    printf("Ayan => %u\n", hash("Ayan")); 
    printf("Premangshu => %u\n", hash("Premangshu")); 
    printf("Logan => %u\n", hash("Logan")); 
    return 0;
}