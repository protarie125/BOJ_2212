#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n, k;
vi p;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n >> k;
	if (n <= k) {
		cout << 0;
		return 0;
	}

	p = vi(n);
	for (auto&& x : p) {
		cin >> x;
	}

	sort(p.begin(), p.end());

	auto d = vi(n - 1);
	for (auto i = 0; i < n - 1; ++i) {
		d[i] = p[i + 1] - p[i];
	}

	sort(d.begin(), d.end());

	auto ans = ll{ 0 };
	for (auto i = 0; i < n - k; ++i) {
		ans += d[i];
	}

	cout << ans;

	return 0;
}