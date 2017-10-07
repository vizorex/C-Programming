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
	int lenL = m - l +1;
	int lenR = r - m ;

	int left[lenL], right[lenR];

	for(i=0;i<lenL;i++)
		{ 
			left[i] = arr[l + i]; 
		}
	for(i=0;i<lenR;i++)
		{ 
			right[i] = arr[m+1+i]; 
		}
	i=0; j=0; k=0;
	while(i<lenL && j < lenR)
	{
		if(left[i] <= right[j])
		{
			arr[l+k] = left[i];
			i++; k++;
		}
		else
		{
			arr[l+k] = right[j];
			j++; k++ ; 
		}
	}

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
        
        int m = l + ((r-l)/2);

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