#include <bits/stdc++.h>
using namespace std ;

int main (){

int n , m,ans=0,w=1;
cin>>n>>m;
int arr[n];
for(int i =0 ; i<n;i++)
{
    cin>>arr[i];
}
for(int i = 0 ; i<n;i++)
{
    if (arr[i]==w)
    {
        ans++;
    }
    if(i==n-1)
    {
        cout<<ans<<endl;
        ans=0;
        w++;
        i=0;
    }
}








}
