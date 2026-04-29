#include <stdio.h>

char board[3][3];

// Initialize board
void initBoard() {
    char ch = '1';
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = ch++;
        }
    }
}

// Print board
void printBoard() {
    printf("\n");
    for(int i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if(i < 2) printf("\n---|---|---\n");
    }
    printf("\n\n");
}

// Check win
int checkWin() {
    // Rows & Columns
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;
    }

    // Diagonals
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;

    return 0;
}

// Place move
int makeMove(int pos, char mark) {
    int row = (pos - 1) / 3;
    int col = (pos - 1) % 3;

    if(board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = mark;
        return 1;
    }
    return 0;
}

int main() {
    int pos, turn = 0;
    char player;

    initBoard();

    while(turn < 9) {
        printBoard();

        player = (turn % 2 == 0) ? 'X' : 'O';
        printf("Player %c, enter position (1-9): ", player);
        scanf("%d", &pos);

        if(pos < 1 || pos > 9 || !makeMove(pos, player)) {
            printf("Invalid move. Try again.\n");
            continue;
        }

        if(checkWin()) {
            printBoard();
            printf("Player %c wins!\n", player);
            return 0;
        }

        turn++;
    }

    printBoard();
    printf("It's a draw!\n");

    return 0;
}