#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--)
    {

    int n;
    cin>>n;
    if(n%2!=0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"3"<<" ";
        }
    cout<<endl;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            cout<<"2"<<" ";
        }
        cout<<"1 3";
    cout<<endl;
    }
    }
}
