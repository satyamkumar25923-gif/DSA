#include<iostream>

int main() {
    int a, b;

    std::cout << "Value of a: ";
    std::cin >> a;

    std::cout << "Value of b: ";
    std::cin >> b;

    if (a > b) {
        std::cout << a << " is greater than " << b << "\n";
    }
    else {
        std::cout << b << " is greater than " << a << "\n";
    }

    return 0;
}