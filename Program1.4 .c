//Accept one number and check whether is it divisible by 5 or not

////////////////////////////////////////////////////////
//Funcation: Check
//Input:     Integer     
//Output:    Boolean 
//Description: It is used to check whether is it divisible by 5 or not
//Date:       03/03/2021
//Author:     Aditya Padmakar Sakare
//
//
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>
#define TRUE 1 
#define FALSE 0

bool Check(int iNo)
{
	if((iNo % 5) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}
int main()
{
	int iValue = 0;
	bool bRet = FALSE;

	printf("Enter a number:\n");
	scanf("%d", &iValue);

	bRet = Check(iValue);

	if(bRet == TRUE)
	{
		printf("Divisible by 5");
	}
	else
	{
		printf("NOt divisible by 5");
	}
	return 0;
}

