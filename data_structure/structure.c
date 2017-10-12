#include <stdio.h>
#include <string.h>


void main()
{
	typedef struct student
	{
		int id;
		char name[30];
		char branch[5];
		
	}student;

	int n;
	printf("Total number of stundent: ");
	scanf("%d", &n);

	student stud[n];

	for(int i=0; i<n;i++)
	{	

		putchar('\n');
		printf("Enter Student's ID: ");
		scanf("%d", &stud[i].id);
		printf("Enter Student's Branch: ");
		scanf("%s", stud[i].branch);
		printf("Enter Student's Name: ");
		scanf("%s", stud[i].name);
		putchar('\n');
	}

	printf("The enter student data are : \n");
	for(int i=0;i<n;i++)
	{
		putchar('\n');
		printf("%d_%s_%s \n", stud[i].id , stud[i].branch, stud[i].name);
		
	}
}