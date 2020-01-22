#include<stdio.h>
void main()
{
	int number,i,flag=0,result=1;
	printf("Enter a number : ");
	scanf("%d",&number);
	for(i=1;i<number/2;i++)
	{
		result=result*2;
		if(result==number)
		flag=1;
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
