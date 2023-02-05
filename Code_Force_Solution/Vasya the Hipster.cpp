#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int d=min(x,y);
    int k=max(x,y)-d;
    int n=k/2;
    cout<<d<<" "<<n;


    return 0;
}
