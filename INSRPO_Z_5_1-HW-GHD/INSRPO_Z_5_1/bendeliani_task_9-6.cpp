#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int size1 = rand() % 29 + 2;
    int arr1[30];

    cout << "1D array (size = " << size1 << "):\n";
    for (int i = 0; i < size1; i++) {
        arr1[i] = rand() % 100;
        cout << arr1[i] << " ";
    }
    cout << "\n\n";


    int rows = rand() % 10 + 1;
    int cols = rand() % 10 + 1;
    int arr2[10][10];

    cout << "2D array (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr2[i][j] = rand() % 100;
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n";


    int pages, r, c;

    cout << "Enter number of pages: ";
    cin >> pages;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    int arr3[10][10][10];

    cout << "\n3D array:\n";
    for (int p = 0; p < pages; p++) {
        cout << "Page " << p << ":\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                arr3[p][i][j] = rand() % 100;
                cout << arr3[p][i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}