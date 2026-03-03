#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main() {
    system("chcp 1251");
    srand(time(0));

    const int row = 5;
    const int col = 8;
    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = rand() % 100; 
        }
    }

    std::cout << "Массив 5x8:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << std::setw(4) << arr[i][j];
        }
        std::cout << std::endl;
    }

    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
    }

    std::cout << "\nСумма всех элементов массива: " << sum << std::endl;

    int max = arr[0][0];
    int min = arr[0][0];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    std::cout << "Максимальный элемент: " << max << std::endl;
    std::cout << "Минимальный элемент: " << min << std::endl;

    return 0;
}