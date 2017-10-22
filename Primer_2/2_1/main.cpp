#include <iostream>

using namespace std;

int main()
{
    int i=10;
    unsigned u=10;
    std::cout << i-u << std::endl;
    std::cout << u-i << std::endl;
    std::cout <<3.14L<< std::endl;
    std::cout <<"2\x4d\n"<< std::endl;
    std::cout <<"2\t\x4d\n"<< std::endl;
    return 0;
}
