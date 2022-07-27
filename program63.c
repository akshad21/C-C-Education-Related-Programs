#include<stdio.h>		//Logic of Arrya written in different function instead of main function

int Addition(int Brr[])
{
	int iCnt=0,iSum=0;
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		iSum=iSum+Brr[iCnt];
	}
	
	return iSum;
	
}
int main()
{
	int Arr[5];			//Array of 5 integers using for loop
	int iSum=0,iCnt=0;
	
	printf("Enter the number\n");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	iRet=Addition(Arr);
	printf("Addition is: %d\n",iSum);
	
	return 0;
}