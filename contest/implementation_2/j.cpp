#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int sum=0,count=0;
    for(int i=a; i<=b; i++)
    {
        int c=i;
        while(c!=0)
        {
            int r=c%10;
            sum=sum*10+r;
            c=c/10;
        }
      //  cout<<c<<sum<<endl;
        if(sum==i)
        {
            count++;
        }
        sum=0;
    }
    cout<<count;

    return 0;
}
