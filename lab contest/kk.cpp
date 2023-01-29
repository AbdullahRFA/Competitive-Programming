#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //MARGARITA
        char str[602];
        int m=0,a=0,r=0,g=0,j=0,t=0,chek=0;
        cin>>str;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='M')
            {
                m++;
            }
            else if(str[i]=='A')
            {
                a++;
            }
            else if(str[i]=='R')
            {
                r++;
            }
            else if(str[i]=='G')
            {
                g++;
            }
            else if(str[i]=='I')
            {
                j++;
            }
            else if(str[i]=='T')
            {
                t++;
            }
        }
        a=(a/3);
        r=(r/2);
        //cout<<m<<a<<r<<g<<j<<t;
        chek=min(m,a);
        //cout<<chek;
        chek=min(chek,r);
        chek=min(chek,g);
        chek=min(chek,j);
        chek=min(chek,t);
        cout<<chek<<endl;
    }
    return 0;
}
