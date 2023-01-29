#include<iostream>
using namespace std;
int main()
{
    int n,a,b,sum1=0;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
    {
        int c=i;
        int sum=0;
        while(c!=0)
        {
            int r=c%10;
            sum=sum+r;
            c=c/10;
        }
        if(sum>=a&&sum<=b)
        {
            sum1=sum1+i;
        }
    }
    cout<<sum1;
    return 0;
}
