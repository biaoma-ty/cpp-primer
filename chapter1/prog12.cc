#include <iostream>

int main()
{
    int a = 0, b = 0, c = 1;
    std::cout << "Please input two int:  (a must bigger than b) " << std::endl;
    std::cin >> a >> b;

    if (a <= b) {
        std::cout << "The input is illegal, a must bigger than b." << std::endl;
        return 0;
    }

    while (a >= b) {
        std::cout << "The range between a and b " << c << "th number is "
            << a << std::endl;
        --a;
        ++c;
    }


    return 0;
}
