#include <iostream>
int main() {
    system("cls");
    int size, uniq_arr_size = 0;
    std::cout << "razmer massiva: "; std::cin >> size;
    int* arr = new int[size];
    std::cout << "elementi massiva: ";
    for (int i = 0; i < size; i++) std::cin >> arr[i]; system("cls");
    for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
    int* sorted_arr = new int[size];
    for (int i = 0; i < size; i++) sorted_arr[i] = arr[i];
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (sorted_arr[j] > sorted_arr[j + 1]) std::swap(sorted_arr[j], sorted_arr[j + 1]);
    std::cout << "\notsortirovanniy massiv: ";
    for (int i = 0; i < size; i++) std::cout << sorted_arr[i] << " ";
    bool found_duplicates = false;
    std::cout << "\npovtoryaushiesya elementi: \n";
    for (int i = 0; i < size - 1; i++) {
        if (sorted_arr[i] == sorted_arr[i + 1]) {
            found_duplicates = true;
            for (int k = 0; k < size; k++) if (arr[k] == sorted_arr[i]) std::cout << '[' << k << "] " << sorted_arr[i] << '\n';
            while (i < size - 1 && sorted_arr[i] == sorted_arr[i + 1]) i++;
        }
    }
    int min = sorted_arr[0];
    int max = sorted_arr[size - 1];
    std::cout << "size: " << size << "\nmax: " << max << "\nmin: " << min << '\n';
    for (int i = 0; i < size; i++) {
        int c = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                c++;
            }
        }
        if (c == 1) {
            uniq_arr_size++;
        }
    }
    int* uniq_arr = new int[uniq_arr_size];
    int n = 0;
    for (int i = 0; i < size; i++) {
        int c = 0;
        for (int j = 0; j < size; j++) if (arr[i] == arr[j]) c++;
        if (c == 1) {
            uniq_arr[n] = arr[i];
            n++;
        }
    }
    std::cout << "unicalnie elementi: ";
    for (int i = 0; i < uniq_arr_size; i++) std::cout << uniq_arr[i] << " ";
    std::cout << '\n';
    std::cout << "uniq_arr_size: " << uniq_arr_size << '\n';
}