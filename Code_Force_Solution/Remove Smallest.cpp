#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[n];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        bool istrue=true;
        for(int k=n-1;k>0;k--)
        {
            if((ara[k]-ara[k-1])>1)
            {
                istrue=false;
            }
        }
        if(istrue)
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
