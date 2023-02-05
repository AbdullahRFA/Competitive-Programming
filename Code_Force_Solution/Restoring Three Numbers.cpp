#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[4];
    for(int i=0;i<4;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+4);
    cout<<ara[3]-ara[2]<<" "<<ara[3]-ara[1]<<" "<<ara[3]-ara[0];

    return 0;
}
