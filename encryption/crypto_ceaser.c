#include<stdio.h>
#include<string.h>

void main()

{

	printf("Enter the the text to be encrypted: " );
	char text[100];
	char x;
	
	scanf("%[^\n]s", text);
	printf("The Text is : %s \n\n", text);
	
	int keybeta;

	printf("Enter the Crypto-Key : ");
	scanf("%d", &keybeta);
	printf("The key for encryption is %d \n\n", keybeta);
	
//eliminating cases when key > 52	
	int key = keybeta % 52;
	printf("--------Ignore------\n %d\n", key);
	
	char code[52];

	printf("Intializing.\n");
	
//making encryption alphabet string
	int j=0;
	for(int i=65;i<123;i++)
	{
		if(i<91)	{ code[j]= i;j++; }
		if(i>96)	{ code[j]=i;j++;}	
	}

	printf("%s \n ---------------------- \n", code);

//encryption process
	for(int x=0, l=strlen(text); x<l; x++)
	{
		int a = text[x]; int b;

		if((a>64&&a<91)||(a>96&&a<123))    //just processing alphabets
		{
			for(int y=0;y<52;y++)
			{
				int z = code[y];
						  //tallying text letter to alphabet string
				if(z==a)
				b=y;
	
			}
	 
				int c = b +key;   //encrypting with addition key algorithm

			if(c<52) 	{	printf("%c", code[c]);		 }
			else 		{	printf("%c", code[c%52]);	 }
	
		}

		else	
			printf("%c", text[x]);
	}
	
	printf("\n");













}
