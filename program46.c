#include<stdio.h>
void display(int iNo)
{	
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
{
	
		if((iCnt%2)==0)
		{
			printf("*\t");
	}
	else
	{
		printf("#\t");
	}	
	
}
}
int main()
{
	int iValue=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	display(iValue);
	return 0;
}