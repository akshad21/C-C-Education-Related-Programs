//accept number from user and return the addition of digits of that numbers
#include<stdio.h>
int CountEven(int);
int main()
{
int iValue=0, iRet=0;
printf("Enter the number\n");
scanf("%d",&iValue);
iRet =CountEven(iValue);
printf("Count of digits is:%d\n",iRet);
return 0;
}
int CountEven(int iNo)
{
	int iDigit=0,iCount=0;
	if(iNo==0)
	{
		return 1;
	}
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iCount++;
		}	
		iNo=iNo/10;
		}
		return iCount;
	
}
