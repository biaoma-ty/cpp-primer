#include <iostream>

int main()
{
    int a = 0, b = 0, c = 0, tmp = 0;
    std::cout << "Please input two numbers: " << std::endl;
    std::cin >> a >> b;

    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    for (int i = a; i <= b; i++) {
        std::cout << "The " << c << "th number of range " << a << " between " << b << " is " << i << std::endl;
        ++c;
    }

    return 0;
}
