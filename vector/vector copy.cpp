#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>var,temp;
    var.push_back(1);
    var.push_back(2);
    var.push_back(3);
    var.push_back(4);
    var.push_back(5);
    temp=var;
    for(int i=0;i<var.size();i++)
    {
        cout<<temp[i]<<" ";
    }
}

