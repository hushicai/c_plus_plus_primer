#include <iostream>

int main()
{
    int sum = 0, value = 0;
    // max系统文件结束符: <C-D>
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is :" << sum << std::endl;
    return 0;
}
