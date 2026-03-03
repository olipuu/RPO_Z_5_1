//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <limits>
//
//int main() {
//    system("chcp 1251 > nul");
//
//    int n;
//    std::cout << "Введите размер массива: ";
//    std::cin >> n;
//
//    if (n <= 0) {
//        std::cout << "Размер должен быть больше 0.\n";
//        return 0;
//    }
//
//    int* arr = new int[n];
//
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//    char choice;
//    std::cout << "Как заполнить? [K]лавиатура / [C]лучайные числа: ";
//    std::cin >> choice;
//
//    bool randomFill = (choice == 'C' || choice == 'c' || choice == 'С' || choice == 'с');
//    bool keyboardFill = (choice == 'K' || choice == 'k' || choice == 'К' || choice == 'к');
//
//    if (keyboardFill) {
//        std::cout << "Введите " << n << " целых чисел: ";
//        for (int i = 0; i < n; i++) {
//            std::cin >> arr[i];
//        }
//    }
//    else if (randomFill) {
//        std::srand((unsigned)std::time(nullptr));
//        for (int i = 0; i < n; i++) {
//            arr[i] = std::rand() % 151 - 50;
//        }
//    }
//    else {
//        std::cout << "Неверный выбор. Введите K или C.\n";
//        delete[] arr;
//        return 0;
//    }
//
//    std::cout << "Элементы массива: ";
//    for (int i = 0; i < n; i++) {
//        std::cout << arr[i] << " ";
//    }
//
//    int sum = 0;
//    int mn = arr[0];
//    int mx = arr[0];
//
//    for (int i = 0; i < n; i++) {
//        sum += arr[i];
//        if (arr[i] < mn) mn = arr[i];
//        if (arr[i] > mx) mx = arr[i];
//    }
//
//    double avg = (double)sum / n;
//
//    std::cout << "\nСумма элементов массива: " << sum;
//    std::cout << "\nСреднее арифметическое: " << avg;
//    std::cout << "\nМинимальный и максимальный элементы: " << mn << " " << mx << "\n";
//
//    delete[] arr;
//    return 0;
//}