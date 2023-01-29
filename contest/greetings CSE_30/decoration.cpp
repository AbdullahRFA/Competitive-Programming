#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long unsigned int ara[3];
    for(int i=0;i<3;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+3);
       long long unsigned int avg=(ara[0]+ara[1]+ara[2])/3;
        long long unsigned int d=ara[0]+ara[1];
        if(d<avg)
        {
            cout<<d<<endl;
        }
        else
        {
            cout<<avg<<endl;
        }

    return 0;
}
