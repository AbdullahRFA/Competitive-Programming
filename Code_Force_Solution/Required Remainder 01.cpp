#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M_PI  3.14159265358979323846
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d=c%a;
    if(d-b>=0)
    {
        c=c-(d-b);
    }
    else
    {
        c=c-d-a+b;
    }
    cout<<c<<endl;
}
int main()
{
    //iso::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed;
    cout<<setprecision(10);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}
