#include<stdio.h>
void main()
{
    int num,i,count=1,j;
    printf("enter the no of prime numbers you want");
    scanf("%d",&num);
    printf("The first %d prime numbers are:\n",num);
    printf("2\t");
    for(j=3;count<num;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
                i=j;
            if(i==j-1)
            {
                printf("%d\t",j);
                count++;
            }
        }
    }
}
