#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0,cnt=0;
    string s;
    cin>>a>>b>>s;
    if(s[a]=='-')
    {
        for(int i=0; i<a; i++)
        {
            if(s[i]>=48&&s[i]<=57)
            {
            }
            else
            {
                cnt++;
            }
        }
        for(int i=a+1; i<s.size(); i++)
        {
            if(s[i]>=48&&s[i]<=57)
            {

            }
            else
            {
                cnt++;
            }
        }
    }
    else
    {
        cout<<"No";
        return 0;
    }
//cout<<cnt<<endl;
if(cnt>0)
{
    cout<<"No";
}
else if(cnt==0)
{
    cout<<"Yes";
}
    return 0;
}
