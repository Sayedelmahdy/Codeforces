#include <bits/stdc++.h>
using namespace std;
//─█████████
int main()
{
long long a,b,c;
cin>>a>>b>>c;

if (a<b && a<c && b<c)
{
  cout<<a<<"\n";
  cout<<b<<"\n";
  cout<<c<<"\n";
  cout<<"\n";
  cout<<a<<"\n";
  cout<<b<<"\n";
  cout<<c<<"\n";

}
else if (a<b && a<c && c<b )
{
  cout<<a<<"\n";
  cout<<c<<"\n";
  cout<<b<<"\n";
  cout<<"\n";
  cout<<a<<"\n";
  cout<<b<<"\n";
  cout<<c<<"\n";

}
else if (b<a && b<c && a<c )
{
  cout<<b<<"\n";
  cout<<a<<"\n";
  cout<<c<<"\n";
  cout<<"\n";
  cout<<a<<"\n";
  cout<<b<<"\n";
  cout<<c<<"\n";

}
else if (b<a && b<c && c<a )
{
  cout<<b<<"\n";
  cout<<c<<"\n";
  cout<<a<<"\n";
  cout<<"\n";
  cout<<a<<"\n";
  cout<<b<<"\n";
  cout<<c<<"\n";

}
else if (c<a && c<b && a<b )
{
  cout<<c<<"\n";
  cout<<a<<"\n";
  cout<<b<<"\n";
  cout<<"\n";
  cout<<a<<"\n";
  cout<<b<<"\n";
  cout<<c<<"\n";

}
else if (c<a && c<b && b<a )
{
  cout<<c<<"\n";
  cout<<b<<"\n";
  cout<<a<<"\n";
  cout<<"\n";
  cout<<a<<"\n";
  cout<<b<<"\n";
  cout<<c<<"\n";

}

else if ((a==b&&a<c))
{
cout<<a<<"\n";
cout<<b<<"\n";
cout<<c<<"\n";
cout<<"\n";
cout<<a<<"\n";
cout<<b<<"\n";
cout<<c<<"\n";
}

else if ((a==c&&a<b))
{
cout<<a<<"\n";
cout<<c<<"\n";
cout<<b<<"\n";
cout<<"\n";
cout<<a<<"\n";
cout<<b<<"\n";
cout<<c<<"\n";
}
else if ((b==c&&c<a))
{
cout<<b<<"\n";
cout<<c<<"\n";
cout<<a<<"\n";
cout<<"\n";
cout<<a<<"\n";
cout<<b<<"\n";
cout<<c<<"\n";
}


}
