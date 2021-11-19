#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){
  bobo;
 int j;
 cin>>j;
 while(j--){
       long long  n;
        cin>>n;
        vector <long long> v(n);
        for( long long i=0;i<n;i++)
            cin>>v[i];
        long long ans=10000000005;
        for( long long i=0;i<n;i++){
            for( long long j=i;j<n;j++){
                for( long long k=0;k<=j-i;k++){
                    v[i+k]=(v[i+k]&v[j-k]);
                }
                 long long w=*max_element(v.begin(),v.end());
                ans=min(ans,w);
            }
        }
        cout<<ans<<endl;
    }
}
