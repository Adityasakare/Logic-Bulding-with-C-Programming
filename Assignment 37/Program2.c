// Recusrsion :
//Output: 	1	2	3	4	5

#include <stdio.h>

void Display(int iNo)
{
	if(0 < iNo)
	{
		printf("%d\t", iNo);
		iNo--;
		Display(iNo);			//Recurssion call
	}


}

int main()
{
	int iValue = 0;
	printf("Enter the Number \n");
	scanf("%d", &iValue);
	Display(iValue);
	return 0;
} 