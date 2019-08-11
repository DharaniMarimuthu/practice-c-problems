#include<iostream>
using namespace std;
int main()
{
int num;
int arr[num];
long long int sum;
unsigned long long int total=0;
cin>>num>>sum;
for(int i=0;i<num;i++)
{
    cin>>arr[i];
}
int first=0,last=0;
for(int i=0;i<num;i++)
{
    total+=arr[i];
    last=i;
    if(total>=sum)
    {

    while((total>sum)&&(first<last))
    {
        total-=arr[first];
        first++;
    }
    if(total==sum)
    {
       cout<<first+1<<" "<<last+1;
       break;
    }
    }
}
return 0;
}
