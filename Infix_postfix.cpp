#include <bits/stdc++.h>
using namespace std;

int count(int n, int a[]) {
    int mx = 0;
    int res = 0;
    for (int i = 0; i < n; ++i) {
        mx = std::max(mx, a[i]);
        if (mx == i) res++;
    }
    return res;
}

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) cin >> a[i];
	    cout << count(n,a) << '\n';
	}
	return 0;
}