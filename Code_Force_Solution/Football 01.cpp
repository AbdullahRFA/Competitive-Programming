#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t, cnt1=0,cnt2=0;
    cin>>t;
    string s1,s2,s3;
    cin>>s1;
    cnt1++;
    t--;
    while(t--)
    {
        cin>>s2;
    if(s1==s2)
        {
            cnt1++;
        }
        else
        {
            s3=s2;
            cnt2++;
        }
    }
      if(cnt1>cnt2)
        {
            cout<<s1;
        }
        else
        {
            cout<<s2;
        }

    return 0;
}
