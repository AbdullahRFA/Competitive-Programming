#include <bits/stdc++.h>
using namespace std;
int main() {
	int k;
	cin >> k;
	while (k--) {
		int n, m;
		cin >> n >> m;
		cout << min(2, n - 1) * m << endl;
	}

	return 0;
}
