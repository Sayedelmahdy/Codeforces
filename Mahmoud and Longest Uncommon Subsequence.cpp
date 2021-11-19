#include <bits/stdc++.h>
using namespace std ;
int main (){

    long long n,y;
    vector <long long > x ;
    cin>>n>>y;
    for(int i =1 ; i<=n ;i+=2)
    {
        x.push_back(i);
    }
    for(int i =2 ; i<=n ;i+=2)
    {
        x.push_back(i);
    }

       cout<<x[y-1]<<" ";


}
