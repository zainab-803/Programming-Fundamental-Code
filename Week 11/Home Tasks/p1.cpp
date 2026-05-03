#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

char board[ROWS][COLS];

// Player position
int playerRow = 9;
int playerCol = 4;

// Initialize board
void initBoard() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = '.';
        }
    }
    board[playerRow][playerCol] = 'P';
}

// Print board
void printBoard() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Move player left
void movePlayerLeft() {
    if (playerCol > 0) {
        board[playerRow][playerCol] = '.';
        playerCol--;
        board[playerRow][playerCol] = 'P';
    }
}

// Move player right
void movePlayerRight() {
    if (playerCol < COLS - 1) {
        board[playerRow][playerCol] = '.';
        playerCol++;
        board[playerRow][playerCol] = 'P';
    }
}

// Fire bullet upward
void fire() {
    int r = playerRow - 1;
    int c = playerCol;

    while (r >= 0) {
        if (board[r][c] == 'E') {
            board[r][c] = '.';
            break;
        }

        board[r][c] = 'F';
        printBoard();
        cout << "-----\n";

        board[r][c] = '.';
        r--;
    }
}

// Move enemy (simple horizontal movement)
void moveEnemy(char object, string direction) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == object) {

                if (direction == "left" && j > 0) {
                    board[i][j] = '.';
                    board[i][j - 1] = object;
                }
                else if (direction == "right" && j < COLS - 1) {
                    board[i][j] = '.';
                    board[i][j + 1] = object;
                }

                return;
            }
        }
    }
}

// Move fire over time (optional extra control)
void moveFire(int timeStep) {
    for (int t = 0; t < timeStep; t++) {
        for (int i = 0; i < ROWS - 1; i++) {
            for (int j = 0; j < COLS; j++) {
                if (board[i][j] == 'F') {
                    board[i][j] = '.';
                    if (i > 0) {
                        board[i - 1][j] = 'F';
                    }
                }
            }
        }
        printBoard();
        cout << "---- time step ----\n";
    }
}

// Main function
int main() {
    initBoard();

    // place enemy for testing
    board[2][4] = 'E';

    printBoard();
    cout << endl;

    movePlayerLeft();
    movePlayerRight();

    fire();

    return 0;
}
