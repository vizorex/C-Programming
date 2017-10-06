#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

void main()
{

	printf("**MySpace- Interesting way to write** \n (Advice: Dont be a retard and be normal ) \n");
	printf("-----------------------------\n");
//program source code
	printf("Please Enter the text:");
	
	char s[100];
	scanf("%[^\n]s", s);
	int l = strlen(s);
	printf("Original Text: %s \n", s);
	
	for(int i=0; i<l ;i++)
	{
		if(i%2) putchar(tolower(s[i]));
		else putchar(toupper(s[i]));	
	}
	putchar('\n'); // remember there is difference in '' & ""
	
}
