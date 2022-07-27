#include<stdio.h> //same as program 47 and 48 just for loop is written in a different way
void display(int iNo)
{	
	int iCnt=0;
	char ch='A';
	for(iCnt=1,ch='a';iCnt<=iNo;iCnt++,ch++)
	{
		printf("%c\t",ch);
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