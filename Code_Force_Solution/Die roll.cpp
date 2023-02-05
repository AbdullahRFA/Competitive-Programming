#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int mx=max(x,y);
    int probability=6+1-mx;
    int divisor =__gcd(probability,6);

    cout<<probability/divisor<<"/"<<6/divisor;

    return 0;
}
