#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,sum=0;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        long long int ara[x],ara1[y];
        for(i=0;i<x;i++)
        {
            cin>>ara[i];
        }
        for(j=0;j<y;j++)
        {
            cin>>ara1[i];
        }
        for(i=0;i<y;i++)
        {
            for(j=0;j<x;j++)
            {
                if(ara1[i]>=ara[j])
                {
                    sum=sum+ara[j];
                }
                else
                {
                    sum=sum+0;
                }
            }
            cout<<sum<<" "; sum=0;
        }


    }

    return 0;
}
