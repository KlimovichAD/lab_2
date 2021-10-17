//Вводится целое число, проверить число на чётность.
#include <iostream>

int main()
{
    int number;
    std::cout << "Please, enter integer: ";
    std::cin >> number;

    if (number % 2 == 0){
        std::cout << "The number: " << number << " is even";
    }
    else {
        std::cout << "The number: " << number << " is odd";
    }
}


