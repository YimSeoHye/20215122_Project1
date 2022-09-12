#include<iostream>

using namespace std;

int main() {
	int v = 0;
	int c = 0;
	char ch;
	cout << "영문자를 입력하고 ctrl + z를 치세요" << endl;
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
	cout << "모음: " << v << endl;
	cout << "자음: " << c << endl;
}