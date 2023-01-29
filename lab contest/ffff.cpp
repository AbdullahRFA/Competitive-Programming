#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    while(1)
    {
        int g,h;
        cin>>g>>h;
        if(g==0&&h==0)
        {
            break;
        }
        int i,count=0,res;
        for(i=g;i<=h;i++)
        {
            res=sqrt(i);
            if(res*res==i)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }


    return 0;
}
