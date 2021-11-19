#include <bits/stdc++.h>
using namespace std;
//─█████████
int main()
{
long long  a,b,c,m,z;
cin>>a>>b>>c;
m=a;
if (m<b)
{
    m=b;
}
if (m<c)
{
    m=c;
}
z=a;
if(z>b)
{
    z=b;
}
if(z>c)
{
    z=c;
}
cout<<z<<" "<<m;
}
