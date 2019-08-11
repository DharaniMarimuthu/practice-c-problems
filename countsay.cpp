#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str="1";
    cout<<str<<endl;
    for(int i=2;i<=n;i++)
    {
     string tmp="";
     int cnt=1;
     str+='$';
     int len=str.length();
     for(int j=1;j<len;j++)
     {
         if(str[j]!=str[j-1])
         {
             tmp+=cnt+'0';
             tmp+=str[j-1];
             cnt=1;
         }
         else
         {
             cnt++;
         }
     }
     str=tmp;
     cout<<tmp<<endl;
    }
    return 0;
}
