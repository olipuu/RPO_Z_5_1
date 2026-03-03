#include <iostream>
#include <ctime>

int main() {
    system("chcp 1251");
    srand(time(0));
    int arr[7][7];
    int max, min, x, y;

    std::cout << "Ishod array:\n";
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            arr[i][j] = rand() % 10;
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    max = min = arr[0][0];
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 7; j++) {
            if (arr[i][j] > max) max = arr[i][j];
            if (arr[i][j] < min) min = arr[i][j];
        }

    std::cout << "\nMax: " << max << "\nMin: " << min;
    std::cout << "\nEnter coord (stroka stolb 0-6): ";
    std::cin >> x >> y;

    if (x >= 0 && x < 7 && y >= 0 && y < 7) {
        arr[x][y] *= 2;
        std::cout << "\nNew array:\n";
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 7; j++)
                std::cout << arr[i][j] << " ";
            std::cout << "\n";
        }
    }
    else std::cout << "Error!\n";

    return 0;
}