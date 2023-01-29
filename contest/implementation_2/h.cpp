#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    list<char>lst;
    string s1,s2;
    cin>>s1>>s2;
    //cout<<s1<<endl;
    //cout<<s2<<endl;
    for(int i=0; i<s1.size(); i++)
    {
        lst.push_back(s1[i]);
    }
    for(int i=0; i<s1.size(); i++)
    {
        char ch=lst.back();
        lst.pop_back();
        lst.push_front(ch);
        int j=0;
        cnt=0;
        for(auto it=lst.begin(); it!=lst.end(); it++)
        {
            if(*it==s2[j++])
            {
                cnt++;
            }
        }
        if(cnt==s1.size())
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;

    return 0;
}
