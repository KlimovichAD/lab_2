//Вводятся 3 числа.Вывести их в порядке возрастания.
#include <iostream>

int main() {
    double a;
    double b;
    double c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    if (a >= b && a >= c && b >= c) {
        std::cout << "Order: " << c << ", " <<  b << ", " << a ;
    } else if (a >= b && a >= c && c >= b) {
        std::cout << "Order: " << b << ", " << c << ", " << a;
    } else if (b >= a && b >= c && a >= c) {
        std::cout << "Order: " << c << ", " << a << ", " << b;
    } else if (b >= a && b >= c && c >= a) {
        std::cout << "Order: " << a << ", " << c << ", " << b;
    } else if (c >= a && c >= b && a >= b) {
        std::cout << "Order: " << b << ", " << a << ", " << c;
    } else if (c >= a && c >= b && b >= a) {
        std::cout << "Order: " << a << ", " << b << ", " << c;
    }

    return 0;
}

