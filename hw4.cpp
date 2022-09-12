#include<iostream>

using namespace std;

int main() {
	int num;
	int sum = 0;
	cin >> num;
	cout << "1";
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			cout << " + " << i;
			sum += i;
		}
	}
	cout << " = " << sum + 1;
}