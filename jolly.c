#include<stdio.h>
void main()
{
    int num,i;
    scanf("%d",&num);
    printf("%d ",num);
    for(i=num-1;i>=0;i--)
    {
        if(num-i>=0)
        {
            num=num-i;
            printf("%d ",num);
        }
        else
        {
            num=num+i;
            printf("%d ",num);
        }


    }
}
