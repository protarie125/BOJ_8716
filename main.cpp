#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll l1, t1, r1, b1;
	cin >> l1 >> t1 >> r1 >> b1;

	ll l2, t2, r2, b2;
	cin >> l2 >> t2 >> r2 >> b2;

	if (r2 <= l1) {
		cout << 0;
		return 0;
	}

	if (r1 <= l2) {
		cout << 0;
		return 0;
	}

	if (t1 <= b2) {
		cout << 0;
		return 0;
	}

	if (t2 <= b1) {
		cout << 0;
		return 0;
	}

	auto l = l1 < l2 ? l2 : l1;
	auto r = r1 < r2 ? r1 : r2;
	auto t = t1 < t2 ? t1 : t2;
	auto b = b1 < b2 ? b2 : b1;

	cout << (r - l) * (t - b);

	return 0;
}