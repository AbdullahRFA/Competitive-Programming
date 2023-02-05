#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[1000000]= {0};
    for(int i=2; i<=1000000; i++)
    {
        if(ara[i]==0)
        {
            for(int j=2; i*j<=1000000; j++)
            {
                ara[i*j]=1;
            }
        }
    }
    int m;
    cin>>m;
    long long a,sqrT;
    for(int k=0; k<m; k++)
    {
        cin>>a;
        sqrT=sqrt(a);
        if(a==1)
        {
            cout<<"NO\n";
        }
        else if(sqrT*sqrT==a&&ara[sqrT]==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}
