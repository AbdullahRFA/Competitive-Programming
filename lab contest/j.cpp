#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,first,second;
    while(cin>>n && n>=2)
    {
        int ara[n];
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        cin>>k;
        for(i=0,j=n-1;i<=j; )
        {
            if((ara[i]+ara[j])==k)
            {
                first=ara[i];
                second=ara[j];
                j--;
                i++;
            }
            else if((ara[i]+ara[j])>k)
            {
                j--;
            }
            else if((ara[i]+ara[j])<k)
            {
                i++;
            }
        }
        cout<<"Peter should buy books whose prices are "<<first<<" and "<<second<<"."<<endl<<endl;

    }

    return 0;
}
