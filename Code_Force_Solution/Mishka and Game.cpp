#include<iostream>
using namespace std;
int main()
{
    int t,x,y,miskat=0,cris=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
      if(x>y)
      {
          miskat++;
      }
      else if(x<y)
      {
          cris++;
      }

    }
     if(miskat>cris)
        {
            cout<<"Mishka";
        }
        else if(miskat<cris)
        {
            cout<<"Chris";
        }
        else if(miskat==cris)
        {
            cout<<"Friendship is magic!^^";
        }

    return 0;
}
