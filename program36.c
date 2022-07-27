#include<stdio.h>
#include<stdbool.h>

bool CheckBool(int);

int main()
{
	int iValue=0;
	bool bRet=false;
	printf("Enter number\n");
	scanf("%d",&iValue);
	bRet=CheckBool(iValue);

if(bRet==true)
{
	printf("Number is pallindrome\n");
}
else
{
	printf("Number is not pallindrome\n");
}
	return 0;
}

bool CheckBool(int iNo)
{
	int iDigit=0,iRev=0;
	int iTemp=iNo;
	
	while(iNo!=0)
	{	
	iDigit=iNo%10;
	iRev=((iRev*10)+iDigit);	
	iNo=iNo/10;	
	}
	if(iRev==iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}	
	
	