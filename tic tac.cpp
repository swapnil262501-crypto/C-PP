#include <iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'}};

void displayBoard() {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) cout << board[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int move, player=1;
    char mark;
    for(int turn=0; turn<9; turn++) {
        displayBoard();
        mark = (player==1)?'X':'O';
        cout << "Player " << player << " enter move (1-9): ";
        cin >> move;
        int r=(move-1)/3, c=(move-1)%3;
        if(board[r][c]=='X' || board[r][c]=='O') {
            cout << "Invalid move!\n"; turn--; continue;
        }
        board[r][c]=mark;
        player = (player==1)?2:1;
    }
    displayBoard();
    cout << "Game Over!\n";
    return 0;
}
