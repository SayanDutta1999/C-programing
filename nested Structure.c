#include<stdio.h>
int main()
{
    struct DOB{
    	int day;
    	int month;
    	int year;
	};
	struct student{
		int roll;
		char *name;
		struct DOB dob;
	};
	struct student stud={ 23,"sayan dutta",{02,05,1999}
	};
	printf("%d\n",stud.roll);
	printf("%s\n",stud.name);
	printf("%d/%d/%d\n",stud.dob.day,stud.dob.month,stud.dob.year);
	
}
