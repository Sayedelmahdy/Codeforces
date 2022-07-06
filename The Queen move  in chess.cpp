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

    int main (){
      int x1,y1,x2,y2;
      while(cin>>x1>>y1>>x2>>y2)
      {
          if (x1==0 && x2 == 0 && y1 ==0 && y2==0)
          {
              break;
          }
          else if(((x1-x2==0)&&(y1-y2!=0))||((y1-y2==0)&&(x1-x2!=0))||(abs(x1-x2)==abs(y1-y2) && abs(x1-x2)!=0 && abs(y1-y2)!=0 ))
          {
              cout<<1<<endl;
          }
          else if(x1-x2==0 && y1-y2==0 )
          {
              cout<<0<<endl;

          }

          else
          {
              cout<<2<<endl;
          }
      }
    }
