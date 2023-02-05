#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,cnt=0;
    cin>>n;
    int ara[n];
    for(long long i=1;i<=n;i++)
    {
       cin>>x;
       for(long long j=1;j<=x;j++)
       {
           if(x%j==0)
           {
               cnt++;
           }
       }
       if(cnt==3)
       {
           cout<<"YES\n";
       }
       else
       {
           cout<<"NO\n";
       }
       cnt=0;
    }


    return 0;
}
