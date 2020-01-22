#include<stdio.h>
int checkpow2();
void main()
{
	int number,i=0,flag=0,result=1;
	printf("Enter a number : ");
	scanf("%d",&number);
	int flag =checkpow2(number);
}
int checkpow2(int number)
{
	if(number==1)
	{
		flag=1;
	}
	
	
}
	
	printf("Result =: %d \n",result);
	if(flag==1)
	{
	printf("Number is power of two \n");
	}
	else
	{
	printf("Number is not power of two \n");
	}
}
