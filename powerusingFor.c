#include<stdio.h>
int powerOfTwo(); 
void main()
{
 int number ;
 printf("Enter a number : ");
 scanf("%d",&number);
 int result=powerOfTwo(number);
  if(result==1)
  {
   printf("Number is power of 2 \n");
  }
  else
  {
   printf("Number is not power of 2\n");
  }
}
 int powerOfTwo(int number)
 {
   if(number<1)
 {
  return 0;
 }
 for(number;number!=1;number=number/2)
 {
  if(number%2 !=0)
  {
   return 0;
  }
 }
return 1;
}

