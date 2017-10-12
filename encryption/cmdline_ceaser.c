#include<stdio.h>
#include<string.h>


void main(int argv, char* text[])
{
//input encryption key	
	
	int keybeta;
	printf("Enter the Crypto-Key : ");
	scanf("%d", &keybeta);

//eliminating cases when key > 52	
	int key = keybeta % 52;
	char code[52];

//making encryption alphabet string
	
	for(int i=65,j=0;i<123;i++)
	{
		if(i<91)	{ code[j]= i;j++; 	}
		if(i>96)	{ code[j]=i;j++;	}	
	}
	
//encryption process
	
	for(int i=1;i<argv;i++)
	{
		int l= strlen(text[i]);
		for(int j=0; j<l; j++)
		{
			int a = text[i][j]; int b;
			
			for(int x=0;x<52;x++)
			{
				int z = code[x];
				if(z==a)
				b=x;
			}
			int c = b +key; 
			//encrypting with addition key algorithm
			printf("%c", code[c%52]);		
		
		}
		printf(" ");
	}
	printf("\n");



}
