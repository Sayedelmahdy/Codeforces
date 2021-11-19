#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    string x,y="";
    cin>>x;
    int q=0,ansx=0,ansy=0;
    for(int i=x.size()-1;i>=0;i--)
    {
        y+=x[i];
    }
    for(int i=0;i<y.size();i++)
    {
        if(y[i]!='0')
        {
            break;
        }
            q++;
    }
    for(int i=q ; i<y.size();i++)
    {
        cout<<y[i];
    }
    cout<<endl;
   ansx=x.size();
   ansy=y.size();
   if(q==1)
   {
       ansy-=1;
   }
   if(ansy==ansx)
   {
       bool rev=true;
       for(int i =0;i<x.size();i++)
       {
           if(x[i]==y[q])
           {
               q++;
           }
           else
           {
               rev=false;
               break;
           }


       }
       if(rev==true)
       {
           cout<<"YES";
       }
       else
        cout<<"NO";
   }
   else
    cout<<"NO";

}
