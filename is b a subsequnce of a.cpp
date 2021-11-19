#include <bits/stdc++.h>
using namespace std ;

int main (){

    int n , m,ans=0 ;
    bool is = true;
    cin>>n>>m;
    int arr[n],arr2[m];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];

    }
    int w =0;
    for(int i=0;i<m;i++)
    {
        for(int j=w ; j<n ; j++)
        {
            if(arr2[i]==arr[j])
            {
                ans++;
                w=j;
                break;
            }

        }
    if (w==n-1)
    {
        break;
    }
    }
    if(ans==m)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}
