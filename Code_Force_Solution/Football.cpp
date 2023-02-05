#include<iostream>
using namespace std;
int main()
{
    int t;
          string s;
          int cnt=0,cntt=0;
    cin>>t;
    while(t--)
    {

        cin>>s;
        if(s=="A")
        {
            cnt++;
        }
        else if(s=="ABA")
        {
            cntt++;
        }

    }
    if(cnt>cntt)
    {
        cout<<"A";
    }
    else
    {
        cout<<"ABA";
    }

    return 0;
}
