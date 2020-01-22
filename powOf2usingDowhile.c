#include<stdio.h>
void main()
{
	int number,i=0,flag=0,result=1;
	printf("Enter a number : ");
	scanf("%d",&number);
	
	do
	{
		if(number==1)
		{
		flag=1;
		break;
		}
		result=result*2;
		if(result==number)
		{
		flag=1;
		break;
		}
		else if(result>number)
		{
			flag=0;
			break;
		}
	i++;
	}while(i<number/2);
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
