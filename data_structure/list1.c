#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct stud
	{	
		int id;
		char name[20];

	}stud;
typedef struct node
	{	
		struct stud student;
		struct node *next;

	}node;
node *first = NULL;


void ins();
void del();
void find();
void view();

void main()
{	
	printf("List \n");
	
	int n=1;
	while(n)
	{	printf("\n1. Insert\n2. Delete\n3. Find\n4. View\n0. Quit\nEnter your Response :  ");
		
		scanf("%d", &n);

		switch(n)
		{
			case 1 :
			ins();
			break;

			case 2 :
			del();
			break;

			case 3 :
			find();
			break;

			case 4 :
			view();
		}	
	}

	printf(" \nSayonara!! \n");
}

void ins()
{
	
	node *ptr = malloc(sizeof(node));
	
	putchar('\n');
	printf("Enter the Student Id:");
	scanf("%d", &ptr->student.id);
	printf("Enter the Student Name :");
	scanf("%s", ptr->student.name);
	ptr->next = NULL;
		
		
	if(first == NULL)
	{
		first = ptr;
		return;
	}
	else 
	{	
		node *tmp = first;
		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		
		tmp->next = ptr;
	}
}

void del()
{
	printf("\nWarning: This will parmanently delete the selective data. \nIf u really want to proceed, give the ID of selective student: ");
	int n;
	scanf("%d", &n);

	if(first->student.id == n)
	{
		first = first->next ;
		return;
	}
	else if(first->next == NULL)
	{
		printf("Warning: Damm! No one with that ID in List!!\n");
		return;
	}
	node *tmpf = first->next;
	node *tmpp = first;
	while(1)
	{	
		if(tmpf->student.id == n)
		{
			tmpp->next = tmpf->next;
			break;
		}

		else if(tmpf->next == NULL)
		{
			printf("Warning: Damm! No one with that ID in List!!\n");
			break;		
		}
		else 
		{	
			tmpp = tmpf;
			tmpf = tmpf->next;
		}
	}
}

void find()
{	
	int n;
	printf("\nEnter the student ID : ");
	scanf("%d", &n);

	node *tmp = first;
	while(1)
	{
		if(tmp->student.id == n)
		{
			printf("Student Name with ID: %d is %s \n", n, tmp->student.name);
			break;
		}

		else if(tmp->next == NULL)
		{
			printf("No student found!!!\n");
			break;		
		}
		else tmp = tmp->next;
	}
}

void view()
{
	printf(" \n The Recorded List Is/are : \n");
	
	node *tmp = first;
	while(1)
	{	
		
		printf("%d_%s \n", tmp->student.id, tmp->student.name);
		if(tmp->next == NULL) break;
		else tmp = tmp->next;
	}
}