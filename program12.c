#include<stdio.h>

void Display(int iValue)
{
	int i=0;
	
	for(i=1;i<=iValue;i++)
	{
		printf("Marvellous\n");
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