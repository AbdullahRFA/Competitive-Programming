#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int a,b,i,cnt=0;
        cin>>a>>b;
        if(a==0 && b==0)
        {
            break;
        }
        else if(a>0 && b>=a)
        {
            for(i=a;i<=b;i++)
            {
                int d=i*i;
                if(d<=b)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}
