#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){
  bobo;
  string s ;
  cin>>s;
  int sum=0;
  for(int i=0 ; i<s.size();i++)
  {
      int w = s[i]-48;
      sum+=w;
  }
   cout<<sum;
}
