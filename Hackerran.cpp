#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){


    bobo;
    int n ,cnt=0 ;
    cin>>n;
    vector<string> arr(n),m;
    vector<double > v;
    for(int i =0; i<n ; i++)
    {
        cin>>arr[i];

    }
    int f ;
    sort(arr.begin(),arr.end());
    for(int i =0; i<n ; i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }

        }
        v.push_back(cnt);
        m.push_back(arr[i]);
        i=i+cnt-1;
        cnt=0;


    }
    vector <string > ans;
    for(int i = 0 ;i<v.size();i++)

    {
        v[i]=(v[i]/n)*100;

       if(v[i]>=5.00)
        {
            ans.push_back(m[i]);

        }

    }
    sort(ans.begin(),ans.end());
for(auto it=ans.begin();it!=ans.end();it++)
    {
        cout<<*it<<endl;
    }




}
