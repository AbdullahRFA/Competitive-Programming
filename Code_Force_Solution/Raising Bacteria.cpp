#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int n;
    cin>>n;
   bitset<64> ara=n;
   //cout<<ara<<endl;
   cout<<ara.count()<<endl;
    return 0;
}
