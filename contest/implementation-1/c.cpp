#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,aim=0,count=0;
        cin>>m;
        string s;
        cin>>s;
        for(int i=0;i<m;i++)
        {
            if(aim==0&&s[i]=='0')
            {
                aim--;
            }
            else if(aim==(-1)&&s[i]=='1')
            {
                count++;
                aim=0;
            }
            else if(aim==(-1)&& s[i]=='0')
            {
                aim=0;
            }
        }
        cout<<count<<endl;
    }
}
