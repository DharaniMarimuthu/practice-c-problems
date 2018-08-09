#include<stdio.h>
void main()
{
    int num,i,j;
    printf("enter a number upto which you want to print prime numbers :\t");
    scanf("%d",&num);
    printf("The numbers are:\n");
    if(num!=1)
    printf("2\t");
    else
        printf("No prime number upto 1");
    for(j=3;j<=num;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
                i=j;
            if(i==j-1)
            {
                printf("%d\t",j);
            }
        }
    }
}
