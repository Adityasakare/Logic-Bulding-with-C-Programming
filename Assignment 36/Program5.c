// Recusrsion :
//Output: 	a b c d e f 	

#include <stdio.h>

void Display(char ch)
{
	if(ch <= 'f')
	{
		printf(" %c\t", ch);
		ch++;
		Display(ch);			//Recurssion call
	}


}

int main()
{
	char cValue = 'a';
	Display(cValue);
	return 0;
} 