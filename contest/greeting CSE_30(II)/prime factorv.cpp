#include<bits/stdc++.h>
using namespace std;
#define size 1000001
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
    long long int n;
    while(1)
    {
        int count=0;
        cin>>n;
        if(n==0)
        {
            break;
        }
        for(int i=2;i<=n;i++)
        {
            if(ara[i])
            {
                if(n%i==0)
                {
                    count++;
                }
            }
        }
           cout<<n<<" : "<<count<<endl;
    }
}

