#include <iostream>

int main() {
    system("chcp 1251");
    int arr[5];
    int sum = 0;
    int max, min;

    std::cout << "Введите 5 целых чисел: ";

    for (int i = 0; i < 5; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    double average = sum / 5.0;

    std::cout << "Введённые числа: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\nСумма введённых чисел: " << sum;
    std::cout << "\nСреднее арифметическое: " << average;
    std::cout << "\nНаибольшее введённое число: " << max;
    std::cout << "\nНаименьшее введённое число: " << min;

    return 0;
}