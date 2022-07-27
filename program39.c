#include<stdio.h>
void DisplayTable(int);

int main()
{
	int iValue=0;
	
	printf("Enter number to display its table\n");
	scanf("%d",&iValue);
	DisplayTable(iValue);
	return 0;
}
void DisplayTable(int iNo)
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
