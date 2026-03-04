#include <iostream>
#include <iomanip>

int main() {
    system("chcp");
    const int size = 7;
    float arr[size];

    std::cout << "Введите " << size << " чисел (можно дробных):" << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << "Элемент " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    std::cout << std::endl;

    std::cout << "\nОтрицательные числа:" << std::endl;
    bool num1 = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            std::cout << arr[i] << " ";
            num1 = true;
        }
    }
    std::cout << std::endl;

    std::cout << "\nНецелые числа:" << std::endl;
    bool num2 = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] != static_cast<int>(arr[i])) {
            std::cout << arr[i] << " ";
            num2 = true;
        }
    }
    std::cout << std::endl;

    std::cout << "\nЦелые положительные числа:" << std::endl;
    bool num3 = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] == static_cast<int>(arr[i])) {
            std::cout << static_cast<int>(arr[i]) << " ";
            num3 = true;
        }
    }
    std::cout << std::endl;

    return 0;
}