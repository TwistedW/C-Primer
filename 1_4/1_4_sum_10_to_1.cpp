#include <iostream>

using namespace std;

int main3()
{
    int sum=0, number=10;
    while(number>=0)
    {
        sum=sum+number;
        number--;
    }
    std::cout<<"Sum of 10 to 1 inclusive is: "
             <<sum<<std::endl;
    return 0;
}

