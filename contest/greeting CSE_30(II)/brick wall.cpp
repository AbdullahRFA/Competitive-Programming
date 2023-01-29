#include<bits/stdc++.h>
using namespace std;
int fibu(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return fibu(n-1)+fibu(n-2);
}
int main()
{
    int n;
    while(scanf("%d",&n)&& n!=0)
    {
        cout<<fibu(n)<<endl;
    }
}
