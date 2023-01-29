#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    int ara[1000];

        while(n>=500)
        {
            ara[i]=500;
            i++;
            n=n-500;
        }
        while(n>=100)
        {
            ara[i]=100;
            i++;
            n=n-100;
        }
        while(n>=50)
        {
            ara[i]=50;
            i++;
            n=n-50;
        }
       while(n>=10)
        {
            ara[i]=10;
            i++;
            n=n-10;
        }
       while(n>=5)
        {
            ara[i]=5;
            i++;
            n=n-5;
        }
        while(n>=1)
        {
            ara[i]=1;
            i++;
            n=n-1;
        }

for(int j=i-1;j>=0;j--)
{
    cout<<ara[j]<<" ";
}

    return 0;
}
