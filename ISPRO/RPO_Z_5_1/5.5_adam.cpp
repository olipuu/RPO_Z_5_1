#include <iostream>
#include <cmath>

int main() {
    system("chcp 1251");
    int number;

    std::cout << "¬ведите число: ";
    std::cin >> number;

    int absNumber = std::abs(number);

    if (absNumber >= 100000 && absNumber <= 999999) {
        std::cout << "¬ведЄнное число - шестизначное";
    }
    else {
        std::cout << "¬ведЄнное число - не шестизначное";
    }

    return 0;
}