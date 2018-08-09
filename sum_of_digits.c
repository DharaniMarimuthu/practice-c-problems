#include <stdio.h>
int main()
{
int number,sum=0;
printf("Enter a number:\t");
scanf("%d",& number);
if(number>0)
{
while(number!=0)
{
sum=sum+(number%10);
number=number/10;
}
printf("the sum is : %d",sum);
}
else
{
printf("error");
}
return 0;
}