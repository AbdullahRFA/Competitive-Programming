#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int a,i;
        cin>>a;
      for(i=2;i<a;i++)
      {
          if(a%i==0)
          {
              cout<<"Not prime\n";
              break;
          }
          else
          {
              cout<<"prime\n";
              break;
          }
      }


      }
    return 0;
}
