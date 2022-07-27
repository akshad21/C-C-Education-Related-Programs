#include<stdio.h>		//Start of array 

int main()
{
	int Arr[5];			//Array of 5 integers using for loop
	int iSum=0,iCnt=0;
	
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("Enter the number\n");
		scanf("%d",&Arr[iCnt]);
	}
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	
	
	printf("Addition is: %d\n",iSum);
	

	return 0;
}