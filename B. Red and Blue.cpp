#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> r(n);
	for (int &x : r) cin >> x;
	int m;
	cin >> m;
	vector<int> b(m);
	for (int &x : b) cin >> x;
	partial_sum(r.begin(), r.end(), r.begin());
	for(int i=0;i<r.size();i++)
    {
        cout<<r[i]<<" ";
    }
    cout<<endl;
	partial_sum(b.begin(), b.end(), b.begin());
	//accumulate(b.begin(), b.end(),0);
	cout << max(0, *max_element(r.begin(), r.end())) + max(0, *max_element(b.begin(), b.end())) << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t--) solve();
}
