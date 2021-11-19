#include <bits/stdc++.h>
using namespace std ;
int main (){

 int x ,y , coun=0;
 cin>>x>>y ;
long long arr1[x] , f ;

 for (int i = 0 ;i <x ;i++)
 {
     cin>>arr1[i];
 }
   for (int i = 0 ;i <y ;i++)
 {
     cin>>f;
    for (int j = 0 ;j <x ;j++)
     {
         if (f>= arr1[j])
         {
             coun++;
         }
     }
     cout<<coun<<" " ;
     coun=0;
 }
}
