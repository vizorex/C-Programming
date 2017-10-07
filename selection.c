/***************************************************************************************************************
*                                                                                                        		*
*	Here is little bit of explation for my sorting technique for selection based sorting               			*   
*																																					*
*	{**|****} is our little int string. Now everything to left of '|' is already sorted, means						*
*	every number in right wing is either greater or equal to any from left wing. Now best thing is to select 	*
*	small from right wing and put it to right most of |  (i swapped the number i to small ). Now everything		*
*	wall +1 is sorted.																														*
*	wall is imaginary ..sort of..now u can figure out everything from Code 													*
*                                                                                                        		*
***************************************************************************************************************/
#include<stdio.h>
#include<string.h>


void main()
{	
	printf("***** Selection Sorting **** Coded By viZoreX ***** \n\n");
	//ask for number array
	int n;	
	printf("Please Enter the total quantity of Number to be sorted :  ");
	scanf("%d",&n);

	int sort[n];
	
	printf(" \nPlease enter all number(s) from the list for sorting.\n**Press Enter after entering a number :\n ");	
	for(int i=0; i<n; i++)
	{
		scanf("%d", &sort[i]);	
	}
	
	printf("The Entered Number(s) list is/are : ");
	for(int i=0; i<n; i++)
	{
		printf(" %d;", sort[i]);	
	}
	putchar('\n');	
	
	//selection sorting source code//
	int small, loc, tmp;
	
	
	for(int i=0;i<n;i++)
	{	
		small = sort[i];
		loc = i;
		for(int j=i;j<n;j++)
		{
			if(sort[j]<small) 
				{ 
					small = sort[j]; 
					loc =j; 
				}
		}	
		
		tmp = sort[i];
		sort[i] = sort[loc];
		sort[loc] = tmp;
	}
	
	//print sorted list
	printf("The Sorted Number(s) list is/are  : ");
	for(int i=0; i<n; i++)
	{
		printf(" %d;", sort[i]);	
	}
		
	printf(" \n\nThat's All Folks :-) \n");
}

