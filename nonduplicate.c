#include<stdio.h>
#include<string.h>
void main()
{
    char array[100];
    int i=0,j;
 int len;
 int count=0;
    printf("enter a string :");
    scanf("%s",&array);
    len=strlen(array);
    for(i=0;i<len;i++)
    {
        for(j=0,count=0;j<len;j++)
        {

            if(array[i]==array[j]||array[i]==array[j]+32||array[i]==array[j]-32)
               count++;
        }

        if(count==1)
     {
         printf("%c is the first non duplicate char",array[i]);
         break;
     }
    }
    if(count!=1)
        printf("there is no non duplicate char ");
}
