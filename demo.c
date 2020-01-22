#include<stdio.h>
void main()
{
int num,flag=1;
printf("Enter a number : ");
scanf("%d",&num);
if(num<1)
    flag = 0;
while(num>1)
{
	if(num%2!=0)
	{
	flag=0;
	break;
	}
	num=num/2;
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
}



