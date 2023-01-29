#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    cout<<"How many number do you want to input: ";
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        s.insert(element);
    }
    set< int > :: iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
   cout<<endl;

    return 0;
}



