#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    int ara[n];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        ara[i]=ara[i]+m;
    }
    for(int j=0;j<n;j++)
    {
        if(ara[j]<=5)
        {
            cnt++;
        }
    }
    if(cnt>=3 && cnt<6)
    {
        cout<<1;
    }
    else
    {
        cout<<cnt/3;
    }

    return 0;
}
