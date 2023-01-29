#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string>st;
    int n;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        string s;
        cin>>s;
        st.insert(s);
    }
    int k;
    cin>>k;
    while(k--)
    {
        string sr;
        cin>>sr;
        auto it=st.find(sr);
        if(it==st.end())
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }


    return 0;
}
