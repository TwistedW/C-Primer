#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item total;
    if (std::cin >> total)
    {
        Sales_item trans;
        int count = 1; //Í³¼Æ¼ÇÂ¼
        while (std::cin >> trans){
            if (total.isbn() == trans.isbn()){
                total +=trans;
                ++count;
            }
            else{
                std::cout << total << std::endl;
                std::cout << count << std::endl;
                total = trans;
                count = 1;
            }
        }
        std::cout << total << std::endl;
        std::cout << count << std::endl;
    } else {
        std::cerr << "Wrong input!" << std::endl;
        return -1;
    }
    return 0;
}
