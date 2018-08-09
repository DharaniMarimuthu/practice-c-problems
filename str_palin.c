
#include<stdio.h>
#include<string.h>
void main()
{
    char string[100],len,i,j,temp[100];
    printf("Enter a string/array : ");
    scanf("%s",string);
    len=strlen(string);
    for(i=0;i<len;i++)
    {
        temp[i]=string[i];
    }
    for(i=0,j=len-1;i<len;j--)
    {
        if(string[i]==temp[j])
           i++;
        else
        {
            printf("\nThe string/array is not palindrome");
            break;
        }
        if(i==len)
            printf("\nThe given string/array is a palindrome");
    }
}
