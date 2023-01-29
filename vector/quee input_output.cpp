#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    cout<<"How many number do you want to input: ";
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        q.push(element);
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}

