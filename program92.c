#include<stdio.h>		

void Display(char*Brr)
{
	printf("Name is:%s\n",Brr);

}
int main()
{
	char Arr[50];
	
	printf("Enter your name:\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);  //Name os array is internally considered as its base address

	return 0;
}