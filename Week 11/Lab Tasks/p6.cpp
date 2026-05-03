#include <iostream>
using namespace std;

const int ROWS = 7;
const int COLS = 16;

char field[ROWS][COLS];

// Initialize field
void initField() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            field[i][j] = '#';   // empty field
        }
    }
}

// Print field
void printField() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
}

// Fire torpedo
void fireTorpedo(string pos) {

    char rowChar = pos[0];          // e.g. D
    int col = stoi(pos.substr(1));  // e.g. 2

    int rowIndex = rowChar - 'A';
    int colIndex = col - 1;

    if (rowIndex >= 0 && rowIndex < ROWS &&
        colIndex >= 0 && colIndex < COLS) {

        field[rowIndex][colIndex] = 'B';  // BOOM
    }
}

int main() {

    initField();

    cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    string input;
    cin >> input;

    fireTorpedo(input);

    cout << "\nResult : splash\n\n";

    printField();

    return 0;
}
