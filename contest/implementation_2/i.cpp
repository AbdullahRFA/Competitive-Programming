#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
   int ara[n];
   for(int i=0;i<n;i++)
   {
       cin>>ara[i];
   }
   for(int i=0;i<n;i++)
   {
       sum+=ara[i];
   }
   cout<<sum-n;
}
