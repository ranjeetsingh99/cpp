#include<iostream>
using namespace std;
int move_x[8] = { -2,-2,-1,-1,1,1,2,2 },
move_y[8] = { -1,1, -2,2,-2,2,-1,1 };

bool issafe(int** board, int row, int col, int n) {
	return (row < n&& col < n&& row > -1 && col > -1 && board[row][col] == -1);
}

bool knight_tour(int** board, int row, int col, int n, int move_no) {
	if ( move_no == (n * n) ) {
		return true;
	}

	if ( issafe(board, row, col, n) ) {
		board[row][col] = move_no;
		for ( int i = 0; i < 8; i++ ) {

			if ( knight_tour(board, row + move_x[i], col + move_y[i], n, move_no + 1) )
				return true;
		}
		board[row][col] = -1;

	}

	return false;
}

int main() {
	int n;
	cin >> n;
	int** board = new int* [n];

	for ( int i = 0; i < n; i++ ) {
		board[i] = new int[n];
		for ( int j = 0; j < n; j++ )
			board[i][j] = -1;
	}

	if ( knight_tour(board, 0, 0, n, 0) )
		for ( int i = 0; i < n; i++ ) {
			for ( int j = 0; j < n; j++ )
				printf("%3d  ", board[i][j]);
			cout << endl;
		}
	else
		cout << "Solution doesn't exist" << endl;

	return 0;
}