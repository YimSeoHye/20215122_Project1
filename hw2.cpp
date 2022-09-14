#include<iostream>
#include<random>

using namespace std;

int main() {
	std::random_device rd;
	std::mt19937_64 num(rd());
	std::uniform_int_distribution<int> rand_num(1, 10);
	
	char ch;
	int num1, num2;
	int result;
	cout << "산수 문제를 자동으로 출제합니다." << endl;
	while (true) {
		num1 = rand_num(num);
		cout << num1 << " ";

		num2 = rand_num(num);
		cout << num2 << endl;


		cout << "연산자 입력하기(+, -, *, /)" << endl;
		cin >> ch;

		cout << "결과 입력하기" << endl;
		cin >> result;

		if ((num1 + num2 == result) || (num1 - num2 == result) || (num1 * num2 == result) || (num1 / num2 == result))
			cout << "맞았습니다" << endl;
		else
			cout << "틀렸습니다" << endl;
	}
}