#include <bits/stdc++.h>
using namespace std;

void solve(){
  int N;
  cin>>N;
  //note: 1<<X means 2^X
  //we put largest coin in first pile
  int sum1=(1<<N), sum2=0;
  //we put n/2-1 smallest coins in first pile
  for (int i=1;i<N/2;i++)
    sum1+=(1<<i);
  //we put remaining n/2 coins in second pile
  for (int i=N/2;i<N;i++)
    sum2+=(1<<i);
  cout<<sum1-sum2<<endl;
}

int main(){
  int t; cin>>t;
  while (t--)
    solve();
}
