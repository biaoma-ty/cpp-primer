#include <iostream>

int main()
{
    int a = 0, b = 0, c = 0;
    std::cout << "Please input two numbers and a must little than b: "
        << std::endl;
    std::cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        std::cout << "The " << c << "th number between " << a << " and " << b << " is "
            << i << std::endl;
        ++c;
    }
    return 0;
}
