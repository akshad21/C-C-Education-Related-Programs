#include<stdio.h>
#include<stdlib.h>

float CountEvent(int Arr[],int iSize)
{
	int iCnt=0,i=0;
	int iSum=0;
	
	for(i=0;i<iSize;i++)
	{	
	if((Arr[i]%2)==0)
		{
			iCnt++;
		}		
	}
	return iCnt;
	
}


int main()
{
	int iLength=0,i=0;
	int*ptr= NULL;
	int iRet=0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=CountEvent(ptr,iLength);
	
	printf("Even no count is:%d\n",iRet);
	free(ptr);
	return 0;
}
