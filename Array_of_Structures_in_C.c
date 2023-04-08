#include<stdio.h>
int main()
{
	int i;
   struct student{
        char *name;
        int roll;
		int age;
	};
	struct student stud[3]={
		{"Sayan Dutta",180,21},
		{"Pritam Ghosh",185,21},
		{"Premangshu Banerjee",170,25}
	
	};
	for(i=0;i<3;i++)
	{
		printf("stud[%d] name=%s\n",i,stud[i].name);
		printf("stud[%d] name=%d\n",i,stud[i].roll);
		printf("stud[%d] name=%d\n",i,stud[i].age);
		printf("\n\n");
	
    }
    
    	return 0;
		
}
