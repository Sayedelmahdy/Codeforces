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
ll findRangeXOR(ll n)
{
    ll mod = n % 4;
    if (mod == 0)
    return n;
    else if (mod == 1)
        return 1;
    else if (mod == 2)
        return n + 1;

    else if (mod == 3)
        return 0;
}
ll findRangeXOR(ll l, ll r)
{
    if(l==0 ) return findRangeXOR(r);
    if(r<l)
    {
         return (findRangeXOR(r - 1) ^ findRangeXOR(l));
    }
    return (findRangeXOR(l - 1) ^ findRangeXOR(r));
}
ll getMaxXOR(ll L, ll R){
   ll LXR = L ^ R;
   ll msbPos = 0;
   while (LXR) {
      msbPos++;
      LXR >>= 1;
   }
   ll maxXOR = 0;
   ll two = 1;
   while (msbPos--) {
      maxXOR += two;
      two <<= 1;
   }
   return maxXOR;
}
ll count_numbers_HaveOnlyOneZero(ll L, ll R)
{
    ll ans = 0;
    ll LogR = log2(R) + 1;
    for (ll i = 0; i < LogR; i++) {

       ll cur = 0;

        for (ll j = 0; j < i; j++)
            {
            cur |= (1LL << j);
            }

        for (ll j = i + 1;j < LogR; j++)
            {
            cur |= (1LL << j);

            if (cur >= L && cur <= R)
             {
                ans++;
             }
            }
    }

    return ans;
}
 bool dp (string s ,int  l,int r)
 {
     int memo [26][s.size()];
     memset(memo, 0, sizeof memo);
     for(int i=0;i<26;i++)
     {
         char same ='a'+i;
         for(int j=0;j<s.size();j++)
         {
             if(j==0)
             {
                 if(s[j]==same)
                    memo[i][j]=1;
                    else
                    memo[i][j]=0;
             }
             else
             {
                 if(s[j]==same)
                    memo[i][j]=memo[i][j-1]+1;
                    else
                    memo[i][j]=memo[i][j-1]+0;
             }
         }
     }
     int coun=0;
      for(int i=0;i<26;i++)
      {
          int num = memo[i][r]-memo[i][l]+(s[l]==(i+'a'));
          if(num%2==1)
            coun++;
      }
      coun/=2;
      if(coun>0)
        return true;
      else
     return false;
 }
    int main (){
      testcase
      {
          int n ,m;
          cin>>n>>m;
          string s;
          cin>>s;
          int ans{};
          while (m--)
          {
              int l,r;
              cin>>l,r;
              if(dp(s,l,r))
              ans++;
          }
          cout<<ans<<endl;
      }


    }
