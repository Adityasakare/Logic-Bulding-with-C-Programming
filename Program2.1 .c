//Accept one number from user and print that number of * on screen

////////////////////////////////////////////////////////
//Funcation: Display
//Input:     Integer    
//Output:    nothing
//Description: It is used to display "*" on screen
//Date:       03/03/2021
//Author:     Aditya Padmakar Sakare
//
//
///////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	for(int iCnt=1; iCnt <= iNo; iCnt++)
	{
		printf("*\n");
	}

}

int main()
{
	int iValue = 0;
	
	printf("Enter number: ");
	scanf("%d", &iValue);
	Display(iValue);
	return 0;
}
