#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct student{
		int roll;
		char *name;
		float marks;
	};
	
	// create structure name variable
	struct student student1;
	struct student student2={
		23,"sayan dutta",45.6
	};
	
     
	student1.roll=23;
	student1.name="sayan dutta";
	student1.marks=69.5;
	
	// Declaring and initializing a pointer to structure variable
	
	struct student *Student1= &student1;
	struct student *Student2= &student2;
	
	printf("Accessing structure members using structure veriable and Dot operator\n");
	
	printf("roll=%d\n",student1.roll);
	printf("name=%s\n",student1.name);
	printf("marks=%f\n",student1.marks);
			printf("\n");
	printf("roll=%d\n",student2.roll);
    printf("name=%s\n",student2.name);
	printf("marks=%f\n",student2.marks);
	        printf("\n");
	
	printf("Accessing structure members using pointer veriable and Arrow operator\n");
	
	printf("roll=%d\n",Student1->roll);
	printf("name=%s\n",Student1->name);
	printf("marks=%f\n",Student1->marks);
			
			printf("\n");
	
	printf("roll=%d\n",Student2->roll);
    printf("name=%s\n",Student2->name);
	printf("marks=%f\n",Student2->marks);
	
	printf("\n");
	
	Student1->marks=59.3;
	Student2->marks=54.2;
		printf("marks=%f\n",Student1->marks);
		printf("marks=%f\n",Student2->marks);
	
	// change the name of student1
	printf("Enter the name of the student1:");
	free(student1.name);
	student1.name=(char *) malloc(15 *sizeof(char));
	scanf("%s",student1.name);
	
	printf("name=%s\n",student1.name);
	
	
	
	
	
	
	return 0;
	
	
}
