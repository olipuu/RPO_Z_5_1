#include <iostream>
#include <iomanip>

int main() {
    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Ошибка, размер массива должен быть положительным числом" << std::endl;
        return 1;
    }

    float* arr = new float[size];

    std::cout << "Введите " << size << " элементов массива:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Элемент " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << std::endl;

    float sum = 0;
    float min = arr[0];
    float max = arr[0];

    for (int i = 0; i < size; i++) {
        sum += arr[i];

        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    float average = sum / size;

    std::cout << "Сумма элементов массива: " << std::fixed << std::setprecision(3) << sum << std::endl;
    std::cout << "Среднее арифметическое эелементов массива: " << std::fixed << std::setprecision(3) << average << std::endl;
    std::cout << "Минимальный и максимальный элементы массива: " << std::fixed << std::setprecision(3) << min << max << std::endl;

    delete[] arr;

    return 0;
}