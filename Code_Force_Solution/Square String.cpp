#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        if(len%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            string str1,str2;
            str1=s.substr(0,len/2);
            str2=s.substr(len/2);
            if(str1==str2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}


sterling Brt_Curncy(int, int, int);
sterling strfnc(sterling, sterling);
void sterlingDisp(sterling);
