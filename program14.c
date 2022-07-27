#include<stdio.h>

void Display(int iValue)
{
	int i=0;
	
	if(iValue<0) 		//input updater
	{
	iValue=-iValue;
	}
	for(i=1;i<=iValue;i++)
	{
		printf("%d\n",i);
	}
}

	int main()
	{
		int iNo=0;
		printf("Enter the number\n");
		scanf("%d",&iNo);
		Display(iNo);	//Function CAal
	
		return 0;
}