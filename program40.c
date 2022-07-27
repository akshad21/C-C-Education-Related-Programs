#include<stdio.h>
void Power(int);

int main()
{
	int iBase=0;
	int iExp=0;
	
	printf("Enter first number \n");
	scanf("%d",&iBase);
	printf("Enter second number\n");
	scanf("%d",&iExp);
	Power(iBase,iExp);
	return 0;
}
void Power(int iNo)
{
	int iCnt=0;
	if(iCnt<0)
	{
		iCnt=-iCnt;
	}
	for(iCnt=1;iCnt<=10;iCnt++)
	{
		
		printf("%d\n",iNo*iCnt);
	}
	
}
