// Recusrsion :
//Output: 	* * * * *

#include <stdio.h>

void Display()
{
	static int iNo = 5;

	if(iNo > 0)
	{
		printf("*\t");
		iNo--;
		Display();			//Recurssion call
	}


}

int main()
{
	Display();
	return 0;
} 