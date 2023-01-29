#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many pair do you want to input: ";
    cin>>n;
    pair<int,string>p[n];
    for(int i=0; i<n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    for(int i=0; i<n; i++)
    {
        cout<<p[i].first<<"->"<<p[i].second<<endl;
    }

    return 0;
}
