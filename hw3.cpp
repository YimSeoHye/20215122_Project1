#include<iostream>

using namespace std;

int main() {
	int n, m;
	int sum = 0;
	cin >> n;
	cin >> m;
	cout << "N ���� " << n << ", M ���� " << m << endl;
	for (int i = 0; i <= n; i++) {
		if (i % m == 0) {
			sum += i;
		}
	}
	cout << sum << endl;
}