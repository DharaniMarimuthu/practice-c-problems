#include<stdio.h>
void main()
{
int num,i=2;
printf("enter a number");
scanf("%d",&num);
if(num==1)
printf("It is neither prime nor composite");
else
while(i<num)
{
if(num%i==0)
{
    if(num==2)
        printf("The number is a prime number");
    else
printf("The number is not prime number");
i=num;
}
if(i==num-1)
printf("The number is a prime number");
i=i+1;
}
}
