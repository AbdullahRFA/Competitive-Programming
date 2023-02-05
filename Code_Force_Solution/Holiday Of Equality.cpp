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
    sort(ara,ara+n);
     for(int i=n-2;i>=0;i--)
    {
        sum+=(ara[n-1]-ara[i]);
    }
    cout<<sum;

    return 0;
}
