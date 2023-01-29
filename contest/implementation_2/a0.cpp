#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,count=0;
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    while(1)
    {
        for(int i=0; i<n; i++)
        {
            if(ara[i]%2!=0)
            {
                cnt=1;
                break;
            }
            else
            {
                ara[i]=ara[i]/2;
            }
        }
        if(cnt==0)
        {
            count++;
        }
        else
            break;
    }
    cout<<count;

    return 0;
}
