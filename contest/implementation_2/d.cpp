#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b;
    c=a+b;
    int d=stoi(c);
    int k=sqrt(d);
    if(d==(k*k))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
