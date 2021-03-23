//Accept one number from user and print that number of * on screen

////////////////////////////////////////////////////////
//Funcation: Accept
//Input:     Integer     
//Output:    nothing
//Description: It is used to display number of * on screen
//Date:       03/03/2021
//Author:     Aditya Padmakar Sakare
//
//
///////////////////////////////////////////////////////
#include<stdio.h>

void Accept(int iNo)
{
	int iCnt = 0;

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("*\n");
	}
}


int main()
{
	int iValue = 0;
	iValue = 5;

	Accept(iValue);
	return 0;
}
