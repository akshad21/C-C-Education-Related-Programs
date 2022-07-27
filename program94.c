#include<stdio.h>		

void Display(char*Brr)
{
	while(*Brr!='\0')
	{
		printf("%c\n",*Brr);
		Brr++;
	}
	
}
int main()
{
	char Arr[50];
	
	printf("Enter your name:\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);  //Name os array is internally considered as its base address

	return 0;
}