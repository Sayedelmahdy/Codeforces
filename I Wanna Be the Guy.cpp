#include <bits/stdc++.h>
using namespace std ;
int main (){

int n,x ;
double sum=0;
cin>>n;
for(int i=0 ; i<n ; i++)
{
    cin>>x;
    sum+=x;
}

 cout<<setprecision(12)<<sum/n<<endl;
}
