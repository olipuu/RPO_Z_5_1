#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("chcp 1251");
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
                        if (arr[x][y] == num) {
                            repeat = true;
                        }
                    }
                }

            } while (repeat);

            arr[i][j] = num;
        }
    }


    cout << "Массив:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }


    int index;
    cout << "\nВведите индекс строки (0-6): ";
    cin >> index;

    if (index >= 0 && index < ROWS) {
        cout << "Строка: ";
        for (int j = 0; j < COLS; j++) {
            cout << arr[index][j] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Неверный индекс\n";
    }


    int value;
    cout << "\nВведите число для поиска: ";
    cin >> value;

    bool found = false;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == value) {
                cout << "Найдено по координатам [" << i << "][" << j << "]\n";
                found = true;
            }
        }
    }

    if (!found) {
        cout << "Число не найдено\n";
    }

    return 0;
}