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
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;
	while (true) {
		num1 = rand_num(num);
		cout << num1 << " ";

		num2 = rand_num(num);
		cout << num2 << endl;


		cout << "������ �Է��ϱ�(+, -, *, /)" << endl;
		cin >> ch;

		cout << "��� �Է��ϱ�" << endl;
		cin >> result;

		if ((num1 + num2 == result) || (num1 - num2 == result) || (num1 * num2 == result) || (num1 / num2 == result))
			cout << "�¾ҽ��ϴ�" << endl;
		else
			cout << "Ʋ�Ƚ��ϴ�" << endl;
	}
}