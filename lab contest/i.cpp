#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {

        char ch[601];
        int M=0,A=0,R=0,G=0,J=0,T=0,res=0;
        int Z,W;
        cin>>ch;
        for(int i=0;ch[i]!='\0';i++)
        {
            if(ch[i]=='M')
            {
                M++;
            }
            else if(ch[i]=='A')
            {
                A++;
            }
            else if(ch[i]=='R')
            {
                R++;
            }
            else if(ch[i]=='G')
            {
                G++;
            }
            else if(ch[i]=='I')
            {
                J++;
            }
            else if(ch[i]=='T')
            {
                T++;
            }
        }Z=(R/2);
        W=(A/3);


        res=min(M,W);

        res=min(res,Z);
        res=min(res,G);
        res=min(res,J);
        res=min(res,T);
        cout<<res<<endl;
    }
    return 0;
}

