#include <stdio.h>
#include<math.h>
int main()
{
int number,i;
int sum=0;
printf("Enter a number:\t");
scanf("%d",& number);
if(number>0)
{
for(i=1;i<number;i++)
{
if((number%i)==0)
{
sum=sum+i;
}
}
if(sum==number||number==1)
printf("This is a perfect number");
else
printf("This is not a perfect number");
}
else
{
printf("error");
}
return 0;
}
