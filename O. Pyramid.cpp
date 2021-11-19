#include <bits/stdc++.h>
#define hanaka cin.tie(0), cout.tie(0), cin.sync_with_stdio(0) , cout.sync_with_stdio(0);
using namespace std;
int main(){
    hanaka
    int x,y,z;
    int k , s,ans = 0;
    cin>>k>>s;
     for( x = 0; x <=k ; ++x){
         for( y = 0; y <= k; ++y){
              z = s - x - y;
             if(z >=0 && z <= k){
                 ans ++;
                 }
             }
         }
     cout << ans << endl;
     return 0;
}
