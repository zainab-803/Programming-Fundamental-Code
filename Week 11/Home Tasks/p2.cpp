#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

char board[ROWS][COLS];

// Player stats
int pRow = 9, pCol = 4;
int playerHealth = 5;
int lives = 3;
int score = 0;

// Initialize board
void initBoard(int level) {
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            board[i][j] = '.';

    // Level 2 maze changes
    if (level == 1) {
        board[3][3] = '#';
        board[3][4] = '#';
    } else {
        board[5][5] = '#';
        board[6][5] = '#';
        board[4][2] = '#';
    }

    board[pRow][pCol] = 'P';

    // Enemies
    board[1][2] = 'E';
    board[1][7] = 'M';
    board[0][5] = 'B';
}

// Print board
void printBoard() {
    cout << "\nScore: " << score
         << "  Lives: " << lives
         << "  Health: " << playerHealth << "\n";

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Player movement
void movePlayerLeft() {
    if (pCol > 0 && board[pRow][pCol - 1] != '#') {
        board[pRow][pCol] = '.';
        pCol--;
        board[pRow][pCol] = 'P';
    }
}

void movePlayerRight() {
    if (pCol < COLS - 1 && board[pRow][pCol + 1] != '#') {
        board[pRow][pCol] = '.';
        pCol++;
        board[pRow][pCol] = 'P';
    }
}

// Player fire
void fire() {
    for (int i = pRow - 1; i >= 0; i--) {

        if (board[i][pCol] == 'E' ||
            board[i][pCol] == 'M' ||
            board[i][pCol] == 'B') {

            board[i][pCol] = '.';
            score += 10;
            break;
        }

        board[i][pCol] = 'F';
        printBoard();
        board[i][pCol] = '.';
    }
}

// Enemy fire (simple downward bullet)
void enemyFire() {
    for (int i = 0; i < ROWS - 1; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == 'E' || board[i][j] == 'M' || board[i][j] == 'B') {
                if (board[i + 1][j] == 'P') {
                    playerHealth--;

                    if (playerHealth == 0) {
                        lives--;
                        playerHealth = 5;
                    }
                }
            }
        }
    }
}

// Enemy movement (simple left-right)
void moveEnemy() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = COLS - 1; j >= 0; j--) {

            if (board[i][j] == 'E' && j < COLS - 1) {
                if (board[i][j + 1] == '.') {
                    swap(board[i][j], board[i][j + 1]);
                }
            }
        }
    }
}

// Game loop demo
int main() {

    int level = 1;

    initBoard(level);
    printBoard();

    cout << "\n--- Player Moves ---\n";
    movePlayerLeft();
    movePlayerRight();

    cout << "\n--- Fire ---\n";
    fire();

    cout << "\n--- Enemy Action ---\n";
    moveEnemy();
    enemyFire();

    printBoard();

    return 0;
}
