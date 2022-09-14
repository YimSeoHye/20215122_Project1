#include<iostream>

using namespace std;

int main() {
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++) {                              //좌표평면 초기화
		for (y = 0; y < 3; y++) board[x][y] = ' ';
	}

	for (k = 0; k < 9; k++) {
			cout << "(x, y) 좌표: ";    //반복문을 돌려서 if문이 성립될 때 다시 입력받고 if문이 성립되지 않으면 좌표에 그림을 그린다.
 			cin >> x >> y;

		    if (board[x][y] == 'x' || board[x][y] == 'o') {  //동일 위치 파악
					cout << "이미 자리가 있습니다." << endl;
		     }
			else {    //좌표평면에 그림 그리기
				board[x][y] = (k % 2 == 0) ? ' x' : ' o';
				for (i = 0; i < 3; i++) {
					cout << "---|---|---" << endl;
					cout << board[i][0] << "  |  " << board[i][1] << "| " << board[i][2] << endl;
					}
				cout << "---|---|---" << endl;
				} 
			}

	for (int i = 0; i < 3; i++) {     //승부가리기
		if ((board[x][y] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) || (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])) {  //가로줄이 같을 때 || 세로줄이 같을 때
			if (k % 2 == 0)
				cout << "첫 번째 플레이어가 이겼습니다." << endl;
			else
				cout << "두 번째 플레이어가 이겼습니다." << endl;
		}
		if ((board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
			if (k % 2 == 0)
				cout << "첫 번째 플레이어가 이겼습니다." << endl;
			else
				cout << "두 번째 플레이어가 이겼습니다." << endl;
		}// 오른쪽 아래 대각선 || 오른쪽 위 대각선
	}
	return 0;
}