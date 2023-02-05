#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ch;
        cin>>ch;
        for(int i=0;i<ch.length()-1;i+=2)
        {
            cout<<ch[i];
        }
        cout<<ch[ch.length()-1]<<endl;
    }


    return 0;
}
