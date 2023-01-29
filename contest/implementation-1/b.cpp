#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    string s;
    getline(cin,s);

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            cout<<s[i];
        }
        else
        {
            int k=(int)s[i]-n;
            if(k<97)
            {
                printf("%c",k+26);
            }
            else
            {
                printf("%c",k);
            }
        }
    }


    return 0;
}
