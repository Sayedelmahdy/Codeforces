#include <bits/stdc++.h>
using namespace std ;

int main (){

int a,b,x,left=0,right=0;
string s ;
cin>>a>>b>>s;
if(a+b==s.size()-1)
    {
for(int i=0 ;i<s.size();i++)
{
    if(s[i]!='-')
    {
        left++;
    }
    else
    {
        x=i+1;
        break;
    }
}
for(int i=x ;i<s.size();i++)
{
    if(s[i]=='1' ||s[i]=='2' ||s[i]=='3' ||s[i]=='4' ||s[i]=='5' ||s[i]=='6' ||s[i]=='7' ||s[i]=='8' ||s[i]=='9'||s[i]=='0' )
    {
        right++;
    }
}
if(left==a && right==b)
{
    cout<<"Yes";
}
else
{
    cout<<"No";
}
}
else
{
    cout<<"No";
}
}
