#include<stdio.h>

int DigitReverse(int);

int main()
{
	int iValue=0,iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=DigitReverse(iValue);
	printf("Reverse number is:%d\n",iRet);

	return 0;
}

int DigitReverse(int iNo)
{
	int iDigit=0,iRev=0;
	
	while(iNo!=0)
	{	
	iDigit=iNo%10;
	printf("%d\n",iDigit);
	iRev=((iRev*10)+iDigit);	
	iNo=iNo/10;	
	}
	return iRev;
}	
	
	