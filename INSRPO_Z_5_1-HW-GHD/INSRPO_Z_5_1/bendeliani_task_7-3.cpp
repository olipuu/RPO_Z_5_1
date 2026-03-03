#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int ROWS = 7;
    const int COLS = 5;
    int arr[ROWS][COLS];

    srand(time(0));

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {

            int num;
            bool repeat;

            do {
                repeat = false;
                num = rand() % 100 + 1;

                for (int x = 0; x < ROWS; x++) {
                    for (int y = 0; y < COLS; y++) {
                        if ((x < i || (x == i && y < j)) && arr[x][y] == num) {
                            repeat = true;
                        }
                    }
                }

            } while (repeat);

            arr[i][j] = num;
        }
    }

    cout << "Array 7x5:\n\n";

    cout << "    ";
    for (int j = 0; j < COLS; j++) {
        cout << j << "    ";
    }
    cout << "\n";

    for (int i = 0; i < ROWS; i++) {
        cout << i << " | ";
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << "\n";
    }

    int rowIndex;
    cout << "\nEnter row index (0-6): ";
    cin >> rowIndex;

    if (rowIndex >= 0 && rowIndex < ROWS) {
        cout << "Row " << rowIndex << ": ";
        for (int j = 0; j < COLS; j++) {
            cout << arr[rowIndex][j] << " ";
        }
        cout << "\n";
    }
    else {
        cout << "Invalid index\n";
    }

    int value;
    cout << "\nEnter value to search: ";
    cin >> value;

    bool found = false;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == value) {
                cout << "Found at [" << i << "][" << j << "]\n";
                found = true;
            }
        }
    }

    if (!found) {
        cout << "Value not found\n";
    }

    return 0;
}