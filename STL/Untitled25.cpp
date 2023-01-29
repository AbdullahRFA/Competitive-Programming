#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
     cin>>ara[i]   ;
    }
    int m;
    cin>>m;
    while(m--)
    {
        int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(ara[i]==k)
        {
            cout<<"Yes "<<i+1<<endl;
            break;
        }
        else
        {
            //cout<<"No ";
            if(ara[i]>k)
            {
                cout<<"No "<<i+1<<endl;
                break;
            }
        }
    }
    }

    return 0;
}

