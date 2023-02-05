#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,i,j;
        cin>>m;
        long long int ara[m],ara1[m],ara2[m];
        for(int i=0;i<m;i++)
        {
            cin>>ara[i];
            //cin>>ara1[i];
        }
        for(int i=0;i<m;i++)
        {
           ara1[i]=ara[i];
        }
        sort(ara1,ara1+m);
        for(i=0, j=m-1;i<m;i++)
        {
            if(ara[i]<ara1[j])
            {
                ara2[i]=ara[i]-ara1[j];
            }
            else
            {
                ara2[i]=ara[i]-ara1[j-1];
            }
        }
        for(int i=0;i<m;i++)
        {
            cout<<ara2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


