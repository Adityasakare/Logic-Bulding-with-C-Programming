// Recusrsion :
//Input: 6
//Output: 	A	B	C 	D 	E 	F	

#include <stdio.h>

void Display(int iNo)
{
	static int iCnt = 0;
	static char ch = 'A';
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
	printf("Enter the number \n");
	scanf("%d", &iValue);
	Display(iValue);
	return 0;
} 