#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v)
{
    cout<<"Entered element is: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>var;
   int element;
   cout<<"How many number do you want to input: ";
   int n;
   cin>>n;
 cout<<"Enter element to input: ";
    for(int i=0;i<n;i++)
    {

        cin>>element;
        var.push_back(element);
    }
    display(var);
}

