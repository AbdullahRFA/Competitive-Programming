#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int ,int>m;
    int sum=0;
    while(n--)
    {
        int k;
        cin>>k;
        m[k]++;
        sum+=k;
    }
    int x;
    cin>>x;
    while(x--)
    {
        int a,b;
        cin>>a>>b;
        if(m[a]>0)
        {
            int cnt=m[a];
            sum-=a*cnt;
            sum+=b*cnt;
            m[a]=0;
            m[b]=m[b]+cnt;
            cout<<sum<<endl;
        }
        else
        {
            cout<<sum<<endl;
        }
    }

    return 0;
}
