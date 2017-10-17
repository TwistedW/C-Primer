#include <iostream>

using namespace std;

int main1()
{
    int sum=0, number=0;
    while(number<=10)
    {
        sum=sum+number;
        ++number;
    }
    std::cout<<"Sum of 1 to 10 inclusive is: "
             <<sum<<std::endl;
    return 0;
}
