#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int >>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        vector<int>temp;
        for(int j=0;i<m;j++)
        {
            int k;
            cin>>k;
            temp.push_back(k);
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
        for(auto it=v[i].begin();it!=v[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    return 0;
}
