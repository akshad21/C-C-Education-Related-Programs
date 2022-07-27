#include<stdio.h>		

int main()
{
	char Arr[50];
	
	printf("Enter your name:\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Your entered names is:%s\n",Arr);
	

	return 0;
}