#include<iostream>
using namespace std;
int a(int m, int n) {
	if (m == 0)return n + 1;
	if (n == 0)return a(m - 1, 1);
	else
		return a(m - 1, a(m, n - 1));
}
int b(int m, int n) {

	while (1) {
		if (m == 0) {
			return n + 1;
		}
		if (n == 0) {
			n = 1;
			m = m - 1;
		}
		else {
			n = b(m, n - 1);
			m--;
		}
	}
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << "»¼°j:" << a(m, n) << endl;
	cout << "«D»¼°j:" << b(m, n) << endl;
	return 0;
}
