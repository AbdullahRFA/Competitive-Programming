#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many vector do you want to create: ";
    cin>>n;
    vector<int>v[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter how many data do you want to input in "<<i+1<<" vector: " ;
        int x;cin>>x;
        for(int j=0;j<x;j++)
        {
            int m;cin>>m;
            v[i].push_back(m);
        }
    }
    for(int i=0;i<n;i++)
    { cout<<"Elements of "<<i+1<<" vector is: ";
        for(auto it=v[i].begin();it!=v[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;

    }
}
