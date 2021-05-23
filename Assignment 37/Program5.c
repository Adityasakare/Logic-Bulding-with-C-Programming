// Recusrsion :
//input: 6
//Output: 	a b c d e f 	

#include <stdio.h>

void Display(int iNo)
{
	static char ch = 'a';
	if(iNo > 0)
	{
		printf(" %c\t", ch);
		ch++;
		iNo--;
		Display(iNo);			//Recurssion call

	}


}

int main()
{
	int iValue = 0;
	printf("enter numbre \n");
	scanf("%d", &iValue);
	Display(iValue);
	return 0;
} 