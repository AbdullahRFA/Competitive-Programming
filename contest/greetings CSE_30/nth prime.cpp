#include<bits/stdc++.h>
using namespace std;
#define size 50000005
int ara[size];
void sieve()
{
    for(int i=2;i<size;i++)
    {
        ara[i]=1;
    }
    for(int i=2;i<=sqrt(size);i++)
    {
        if(ara[i]==1)
        {
            for(int j=2;j*i<size;j++)
            {
                ara[i*j]=0;
            }
        }
    }
}

int main()
{
    sieve();
    int n,count=0;
    cin>>n;
    for(int i=2; ;i++)
    {
        if(ara[i]==1)
        {
            count++;
        }
        if(n==count)
        {
            cout<<i;
            break;
        }
    }


    return 0;
}

