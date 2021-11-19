#include <bits/stdc++.h>
using namespace std ;
int main ()
{

 int x,y;
 cin>>x>>y;
 int l=0;
 for(int i =x ; i<=y ; i++)
 {
     int w=0;
     string s = to_string(i);
     for(int j=0 ; j<s.size();j++)
     {
         if(s[j]=='7' || s[j]=='4')
         {
            w++;

         }
     }
     if(w==s.size())
     {
         cout<<i<<" ";
       l++;
     }
 }
 if(l==0)
 {
     cout<<-1;
 }



}
