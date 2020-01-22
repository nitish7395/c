#include<stdio.h>
void main()
{
	int number,i=0,flag=0,result=1;
	printf("Enter a number : ");
	scanf("%d",&number);
	if(number==1)
	{
		flag=1;
	}
	while(i<number/2)
	{
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
