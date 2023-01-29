#include <bits/stdc++.h>
#include<stdio.h>
#include <string>

using namespace std;

int main() {
	string S;
	cin >> S;
	string q;
	q+=S;
	reverse(S.begin(),S.end());
	if(q==S)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
