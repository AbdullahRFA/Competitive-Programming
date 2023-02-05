#include<iostream>
using namespace std;
int main()
{
    int n,m,sum=0;
    int i=1,cnt=0;
    cin>>n>>m;
    int d=240-m;
    while(sum<=d)
    {
        sum=sum+(5*i);
        i++;
        cnt++;
    }
    if(cnt>n)
    {
        cout<<n;
    }
    else
    {
        cout<<cnt-1;
    }


    return 0;
}
