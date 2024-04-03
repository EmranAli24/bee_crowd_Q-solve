// Using switch function that displays vowel/consonent 
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any letter:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e': 
		case 'i': 
		case 'o': 
		case 'u': 
		case 'A': 
		case 'E': 
		case 'I': 
		case 'O': 
		case 'U': 
			printf("Vowel\n");
			break;
		default: 
			printf("consonent\n");

	}
	return 0;
}
