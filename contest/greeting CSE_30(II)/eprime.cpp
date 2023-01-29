#include<bits/stdc++.h>
using namespace std;
#define size 1000001
int ara[size];
void sieve()
{
    for(int i=2; i<size; i++)
    {
        ara[i]=1;
    }
    for(int t=2; t<=sqrt(size); t++)
    {
        if(ara[t]==1)
        {
            for(int k=2; t*k<size; k++)
            {
                ara[t*k]=0;
            }
        }
    }
}
int Reverse(long long unsigned int n)
{
    long long unsigned int sum=0;
    long long unsigned int temp=n;
    while(n!=0)
    {
        long long unsigned int r=n%10;
        sum =sum*10+r;
        n=n/10;
    }
    //cout<<sum<<endl;
     if(ara[sum]==1 && temp!=sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    sieve();
    long long unsigned int n;
    cin>>n;
    if(ara[n]==1)
    {
        int d= Reverse(n);
        if(d==1)
        {
            cout<<n<<" is emirp."<<endl;
        }
        else
        {
            cout<<n<<" is prime."<<endl;
        }
    }
    else
    {
        cout<<n<<" is not prime."<<endl;
    }
}
