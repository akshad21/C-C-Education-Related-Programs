//accept number from user and return the addition of digits of that numbers
#include<stdio.h>
int Display(int);
int main()
{
int iValue=0, iRet=0;
printf("Enter the number\n");
scanf("%d",&iValue);
iRet =Display(iValue);
printf("Count of digits is:%d\n",iRet);
return 0;
}
int Display(int iNo)
{
	int iDigit=0,iCount=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		iCount++;  			//iCount=iCount+1
		iNo=iNo/10;
		}
		return iCount;
	
}
