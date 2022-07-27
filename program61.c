#include<stdio.h>		//Start of array 

int main()
{
	int Arr[5];			//Array of 5 integers using for loop
	int iSum=0,iCnt=0;
	
	
	printf("Enter the number\n");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	
	
	printf("Addition is: %d\n",iSum);
	

	return 0;
}