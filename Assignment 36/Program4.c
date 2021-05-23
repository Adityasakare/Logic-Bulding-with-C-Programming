// Recusrsion :
//Output: 	A	B	C 	D 	E 	F	

#include <stdio.h>

void Display(char ch)
{
	if(ch <= 'F')
	{
		printf(" %c\t", ch);
		ch++;
		Display(ch);			//Recurssion call
	}


}

int main()
{
	char cValue = 'A';
	Display(cValue);
	return 0;
} 