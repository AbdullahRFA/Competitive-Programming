#include <bits/stdc++.h>
//#include<stdio.h>
#include <string>

using namespace std;

int main() {
	string S;
	cin >> S;
	s1=S;
	//S.reverse();
	strrev(S);
	if(s1==S)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}

