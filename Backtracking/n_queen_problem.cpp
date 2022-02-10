#include<iostream>
using namespace std;
bool issafe(int** board , int row , int col , int n) {

    //check previous columns
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;

    //check upper diagonal
    for (int i = row , j = col; i >= 0 && j >= 0; i-- , j--)
        if (board[i][j])
            return false;

    //check lower diagonal
    for (int i = row , j = col; i < n && j >= 0; i++ , j--)
        if (board[i][j])
            return false;

    return true;
}

bool n_queen_problem(int** board , int col , int n) {
    if (col >= n)
        return true;

    for (int i = 0; i < n; i++)
        if (issafe(board , i , col , n)) {
            board[i][col] = true;
            if (n_queen_problem(board , col + 1 , n))
                return true;

            board[i][col] = 0;
        }

return false;
}


void print_board(int** board,int n){
    for(int i=0;i<n;i++){
        for(int j= 0;j<n;j++)
            if(board[i][j])
                cout<<"Q ";
            else
                cout<<". ";
        cout<<endl;
    }
}

int main() {
    int n;
    cin >> n;
    int** board = new int* [n];
    for (int i = 0; i < n; i++) {
        board[i] = new int[n];
        for (int j = 0; j < n; j++)
            board[i][j] = 0;
    }
    if(n_queen_problem(board,0,n))
        print_board(board,n);

    else    
        cout<<"Solution not exist.";

    return 0;
}