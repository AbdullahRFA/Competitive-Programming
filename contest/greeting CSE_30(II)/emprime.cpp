#include<bits/stdc++.h>
using namespace std;
int is_prime(long long int n)
{
    if(n==0||n==1)
    {
        return 0;
    }
    else if(n==2||n==3)
    {
        return 1;
    }
    else if(n%2==0 || n%3==0 || n%5==0)
    {
        return 0;
    }
    else
    {
        for(int i=5;i<=sqrt(n);i+=6)
        {
            if(n%i==0 || (n%(i+2)==0))
                return 0;
        }
    }
    return 1;
}
int Reverse(long long int n)
{
    long long int temp,sum=0;
    temp=n;
    while(n!=0)
    {
        long long int rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(is_prime(sum)==1&& sum!=temp)
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

    long long int n;
    //cin>>n;
    while((scanf("%lld",&n))==1)
    if(is_prime(n))
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
