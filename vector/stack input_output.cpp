#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    cout<<"How many number do you want to input: ";
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        st.push(element);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}
