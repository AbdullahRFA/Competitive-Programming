#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;

    while(1)
    {
        cin>>a>>b;
        if(a==0 && b==0)
        {
            break;

        }
        int i,count=0,check;
        for(i=a;i<=b;i++)
        {
            check=sqrt(i);
            if((check*check)==i)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
