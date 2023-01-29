#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum1=0,sum2=0;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(i=0;i<n;i+=2)
    {
        sum1+=ara[i];
        //sum2+=ara[j];
    }
    for(i=1;i<n;i+=2)
    {
        //sum1+=ara[i];
        sum2+=ara[i];
    }
   // cout<<sum1<<" "<<sum2<<endl;
    int d=abs(sum1-sum2);
    cout<<d;
    return 0;
}
