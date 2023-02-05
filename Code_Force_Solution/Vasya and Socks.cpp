#include<iostream>
using namespace std;
int main()
{
    int x,y;cin>>x>>y;
    for(int j=1;j*y<=x;j++)
    {
        x++;
    }
    cout<<x;

    return 0;
}
