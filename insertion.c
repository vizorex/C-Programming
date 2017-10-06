#include<stdio.h>
#include<string.h>



void main()
{	
	printf("***** Insertion Sorting***** \n***** Coded By viZoreX ***** \n\n");
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
	
	//insertion sorting source code ****actual relevant code****//

	for(int i=1;i<n;i++)
	{
		int key = sort[i];  //selecting a number to insert it in already sorted list
		for(int j = i;j > -1;j--)
		{
			if(sort[j-1]>key) {sort[j] = sort[j-1];} 
			//moving bigger number back of array
			else if(sort[j-1]<key || sort[j-1] == key) { sort[j]=key; break; } 
			//if no bigger number then its sorted, use break to get out.
		}
	
	}
	
	//print sorted list
	printf("The Sorted Number(s) list is/are  : ");
	for(int i=0; i<n; i++)
	{
		printf(" %d;", sort[i]);	
	}
		
	printf(" \n\nThat's All Folks :-) \n");
	
	

}
