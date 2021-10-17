// ВВодится число и интервал(2 числа).Проверить попадает ли число в интервал.
#include <iostream>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Please, enter any number: ";
    std::cin >> a;
    std::cout << "Enter the interval: ";
    std::cin >> b >> c;
    if (a>b && a<c || a>c && a<b) {
        std::cout << "The number: " << a << " belongs to interval: ("<< b << ";" << c << ")";
    }
    else {
        std::cout << "The number: " << a << " doesn't belong to interval: ("<< b << ";" << c << ")";
    }
        return 0;

}

