#include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) emplace_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define endl "\n"
        #define soso ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
        #define tolower(x)  transform(x.begin(), x.end(), x.begin(), ::tolower);
        #define toupper(x)  transform(x.begin(), x.end(), x.begin(), ::toupper);
    using namespace std ;
const ll  MOD = 1000000007;
ull fun(ull n  , ull m)
{

  if (n==0)
    return 0;
  if (m==0)
  {
      return 1;

  }
  ull ans;
  if(m%2==0)
  {
      ans=(fun(n,m/2));
      ans=(ans*ans)%MOD;
      return (ull)(ans+MOD)%MOD;
  }
  else
  {

      return( (n%MOD)*(fun(n,m-1)%MOD))%MOD;
  }


}
int main (){
    ull n , m;
    cin>>n>>m;

   cout<<fun(n,m);
    }
