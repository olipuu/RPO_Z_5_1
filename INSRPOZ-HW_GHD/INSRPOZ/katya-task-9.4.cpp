#include <iostream>

int main() {
    int n;
    std::cout << "Enter kolvo elements: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int choice;
    std::cout << "Choice sort (1 - po vozrastaniy, 2 - po ybivaniy): ";
    std::cin >> choice;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((choice == 1 && arr[j] > arr[j + 1]) ||
                (choice == 2 && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    std::cout << "Array with sort:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}