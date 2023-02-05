#include<iostream>
using namespace std;
int main()
{
    int x=0,t;
    cin>>t;
    string ch;
    while(t--)
    {
        cin>>ch;
       if(ch=="++X"||ch=="X++")
       {
           x++;
       }
       else
       {
           x--;
       }

    }
 cout<<x;

    return 0;
}
