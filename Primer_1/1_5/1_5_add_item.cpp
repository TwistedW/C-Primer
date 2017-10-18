#include <iostream>
#include"Sales_item.h"

using namespace std;

int main()
{
    Sales_item item1;
    Sales_item item2;
    Sales_item item3;
    std::cin>>item1>>item2>>item3;
    std::cout<<item1+item2+item3<<std::endl;
    return 0;
}
