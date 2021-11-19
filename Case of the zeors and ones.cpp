#include <bits/stdc++.h>
using namespace std ;
int main (){
    int n , x ;
    bool s = false ;
 int arr[16] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    cin >> n >> x;
    for (int i=0;i<16 ; i++)
    {
        if(arr[i]==n && arr[i+1]==x)
        {
            s=true ;
            break;
        }
    }
    if (s==true)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}
