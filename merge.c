#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void welcome_msg();
void print_array(int s[], int n);
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);

void main()
{
	welcome_msg();
	int nos;
	printf("Please Enter the total quantity of Number to be sorted : ");
	scanf("%d",&nos);
	
	int sort[nos];
	printf(" \nPlease enter all number(s) from the list for sorting.\n**Press Enter after entering a number :\n ");	
	for(int i=0; i<nos; i++)
	{
		scanf("%d", &sort[i]);	
	}
	printf("The Entered Number(s) list is/are : ");
	print_array(sort,nos);

	mergeSort(sort,0,nos-1);
	
	printf("The Sorted Number(s) list is/are : ");
	print_array(sort, nos);
}

void merge(int arr[], int l, int m, int r)
{
	int i, j , k;
	int lenL = m - l +1; // length of left half
	int lenR = r - m ; //length of right half

	int left[lenL], right[lenR];	
	//asking for temporary array for left halves and right halves to store their values
	//copying values to respective halves..
	for(i=0;i<lenL;i++)
		{ 
			left[i] = arr[l + i]; 
		}
	for(i=0;i<lenR;i++)
		{ 
			right[i] = arr[m+1+i]; 
		}
	i=0; j=0; k=0; //set these values to 0 to intialize sorting saving of arrays..
	while(i<lenL && j < lenR)  //we are not sure if left is bigger or right is ..so i put both to be safe
	{
		if(left[i] <= right[j])
		{
			arr[l+k] = left[i];
			i++; k++; //a number from left is copied increment i of left and k of arr..
		}
		else
		{
			arr[l+k] = right[j];
			j++; k++ ; 
		}
	}

	//if left or right halves are not equal in size..this while ensure the remaining un compared number is pasted
	while(i<lenL)
	{
		arr[l + k] =left[i];
		i++; k++;
	}

	while(j<lenR)
	{
		arr[l+k] = right[j];
		j++; k++;
	}
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        
        int m = l + ((r-l)/2); //to find mid index of arr between l and r

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}
void print_array(int s[],int n)
{
	
	for(int i=0; i<n; i++)
	{
		printf(" %d;", s[i]);	
	}
	putchar('\n');	
}


void welcome_msg()
{
	printf("***** Merge   Sorting ***** Coded By viZoreX ***** \n\n");
}