#include<stdio.h> 
void display()
{	
	int iRow=3;
	int iCol=4;
	
	int i=0,j=0; 
	
	for(i=1;i<=iRow;i++)
	{
		for(j=0;j<=iCol;j++)
		{
			printf("*\t");
			
		}
			printf("\n");
	}
}
int main()
{
	display();
	return 0;
}