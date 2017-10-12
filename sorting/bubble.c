#include<stdio.h>
#include<string.h>



void main()
{	
	printf("***** Bubble   Sorting ***** \n***** Coded By viZoreX ***** \n\n");
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
	
	//bubble sorting source code//
	
	int swap_made =1;	
	while(swap_made != 0)
	{	swap_made = 0; //set value to zero to begin sorting
		for(int i=0; i<n-1 ; i++)
		{
			if(sort[i]>sort[i+1])
			{	/* if found first number greater than next, it swaps its position */
				int tmp;
				tmp = sort[i];
				sort[i] = sort[i+1];
				sort[i+1] = tmp;
				swap_made = 1; //swap made, set value to 1, loops continue
			}		
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
