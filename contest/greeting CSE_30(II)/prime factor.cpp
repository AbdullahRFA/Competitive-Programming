#include<bits/stdc++.h>
using namespace std;
int is_prime(long long int n)
{
    if(n==0||n==1)
    {
        return 0;
    }
    else if(n==2||n==3||n==5)
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

int main()
{

    long long int n;
    //cin>>n;
    while(1)
    {
        int count=0;
        cin>>n;
        if(n==0)
        {
            return 0;
        }
        else
        {
            if(n%2==0)
            {
                count++;
            }
            for(int i=3;i<=n;i+=2)
            {
                if(is_prime(i))
                {
                    if(n%i==0)
                    {
                        count++;
                    }
                }
            }
        }
        cout<<n<<" : "<<count<<endl;

    }
return 0;
}
