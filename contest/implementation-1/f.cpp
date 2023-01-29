#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    int count=0,i=1;
    while(a<=b)
    {
        a=a*2;

       count++;
     //cout<<a<<" " ;
    }
    cout<<count<<endl;
    return 0;
}
