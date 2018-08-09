#include <stdio.h>
#include<math.h>
int main()
{
int number,size=0,sum=0;
int temp;
printf("Enter a number:\t");
scanf("%d",& number);
temp=number;
while(temp!=0)
{
temp=temp/10;
size=size+1;
}
temp=number;
if(number>0)
{
while(temp!=0)
{
sum=sum+pow((temp%10),size);
temp=temp/10;
}
if(sum==number)
printf("This is an Armstrong number");
else
printf("This is not an Armstrong number");
}
else
{
printf("error");
}
return 0;
}
