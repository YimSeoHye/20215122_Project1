#include<iostream>

using namespace std;

int main() {
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++) {                              //��ǥ��� �ʱ�ȭ
		for (y = 0; y < 3; y++) board[x][y] = ' ';
	}

	for (k = 0; k < 9; k++) {
			cout << "(x, y) ��ǥ: ";    //�ݺ����� ������ if���� ������ �� �ٽ� �Է¹ް� if���� �������� ������ ��ǥ�� �׸��� �׸���.
 			cin >> x >> y;

		    if (board[x][y] == 'x' || board[x][y] == 'o') {  //���� ��ġ �ľ�
					cout << "�̹� �ڸ��� �ֽ��ϴ�." << endl;
		     }
			else {    //��ǥ��鿡 �׸� �׸���
				board[x][y] = (k % 2 == 0) ? ' x' : ' o';
				for (i = 0; i < 3; i++) {
					cout << "---|---|---" << endl;
					cout << board[i][0] << "  |  " << board[i][1] << "| " << board[i][2] << endl;
					}
				cout << "---|---|---" << endl;
				} 
			}

	for (int i = 0; i < 3; i++) {     //�ºΰ�����
		if ((board[x][y] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) || (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])) {  //�������� ���� �� || �������� ���� ��
			if (k % 2 == 0)
				cout << "ù ��° �÷��̾ �̰���ϴ�." << endl;
			else
				cout << "�� ��° �÷��̾ �̰���ϴ�." << endl;
		}
		if ((board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
			if (k % 2 == 0)
				cout << "ù ��° �÷��̾ �̰���ϴ�." << endl;
			else
				cout << "�� ��° �÷��̾ �̰���ϴ�." << endl;
		}// ������ �Ʒ� �밢�� || ������ �� �밢��
	}
	return 0;
}