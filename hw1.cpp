#include<iostream>

using namespace std;

int main() {
	int v = 0;
	int c = 0;
	char ch;
	cout << "�����ڸ� �Է��ϰ� ctrl + z�� ġ����" << endl;
	while (cin >> ch) {
		if (ch >= 'a' && ch<='z') {
			switch (ch) {
			case 'a':case 'e':case 'i':case 'o':case 'u':
				v++;
				break;
			default:
				c++; break;
			}
		}
		else
			cout << "Check to alphabet" << endl;
	}
	cout << "����: " << v << endl;
	cout << "����: " << c << endl;
}