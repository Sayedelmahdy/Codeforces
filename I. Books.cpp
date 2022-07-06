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
int isPrime(long long N) {
    if (N == 0 || N == 1 || (N % 2 == 0 && N > 2)) {
        return 0;
    }
    else {
        for (long long i=3; i <= (long long)sqrt(N)+1; i++) {
            if (N % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}
bool secndtsort (pair<string,int>&a,pair<string,int>&b )
{

    return (a.second>b.second);
}
ll getSum(string str)
{
    ll sum = 0;


    for (int i = 0; i < str.length(); i++) {
        sum = sum + str[i] - 48;
    }
    return sum;
}

    int main (){
   string s;
   cin>>s;
   for(int i=0;i<s.size()-2;i++)
   {
       if(s[i]==s[i+1] || s[i]==s[i+2] || s[i+1]==s[i+2])
       {
           cout<<"YES"<<endl;
           return 0;
       }
   }
   cout<<"NO"<<endl;
    }
