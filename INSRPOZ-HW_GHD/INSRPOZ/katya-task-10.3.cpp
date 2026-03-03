#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int x, y;
    std::cout << "Enter 2 numbers: ";
    std::cin >> x >> y;

    std::cout << "NOD: " << gcd(x, y) << std::endl;

    return 0;
}