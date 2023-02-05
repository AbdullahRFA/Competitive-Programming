#include<iostream>
using namespace std;
int main()
{
    int i=2,shovel_value,coin,cnt=1;
    cin>>shovel_value>>coin;
    int m=shovel_value;
    while(1)
    {
        if(shovel_value%10==0)
        {
            cout<<cnt;
            break;
        }
        else if(shovel_value%10==coin)
        {
            cout<<cnt;
            break;
        }
        shovel_value=m*i;
        cnt++;
        i++;
    }

    return 0;
}
