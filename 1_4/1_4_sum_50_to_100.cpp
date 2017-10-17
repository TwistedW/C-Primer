#include <iostream>

using namespace std;

int main2()
{
    int sum=0, number=50;
    while(number<=100)
    {
        sum=sum+number;
        number++;
    }
    std::cout<<"Sum of 50 to 100 inclusive is: "
             <<sum<<std::endl;
    return 0;
}

