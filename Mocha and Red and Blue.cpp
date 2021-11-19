#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){

    int n ;
    cin>>n;
    while(n--)
    {
        int l,cnt=0 ;
        cin>>l;
        string x ;
        cin>>x;
        if(x=="?")
        {
            cout<<"B"<<endl;
        }
        else{
        for(int i=0 ; i<l;i++)
        {
            if(x[i]=='?')
                cnt++;
        }
        if(cnt==l)
        {
            for(int i=0 ; i<l;i++)
        {
            if(i%2==0)
                x[i]='R';
                else
                x[i]='B';
        }
        }
        else{
        while(cnt!=0){
        for(int i=0 ; i<l;i++)
        {
            if(x[i]=='?' && x[i+1]=='R')
            {
                x[i]='B';
                cnt--;
            }
            else if (x[i]=='?' && x[i+1]=='B')
            {
                x[i]='R';
                cnt--;
            }
            else if (x[i]=='?' && x[i+1]=='?')
            {
                continue;
            }
        }
        for(int i=l-1 ; i>=0;i--)
        {
            if(x[i]=='?' && x[i-1]=='R')
            {
                x[i]='B';
                cnt--;
            }
            else if (x[i]=='?' && x[i-1]=='B')
            {
                x[i]='R';
                cnt--;
            }
            else if (x[i]=='?' && x[i-1]=='?')
            {
                continue;
            }
        }
        }
        }
        cout<<x<<endl;



    }

    }





}
