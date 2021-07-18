#include <iostream>

int main()
{
    int order = 0;
    for (int i = 10; i >= 0; --i)
    {
        std::cout << "The " << order << "th number of 10 to 0 desc is "
            << i << std::endl;
        ++order;
    }

    return 0;
}
