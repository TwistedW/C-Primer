#include <iostream>

using namespace std;

int main6()
{
    int sum=0, number=0;
    for(number=1; number<=10; number++)
    {
        sum=sum+number;
    }
    std::cout<<"Sum of 1 to 10 inclusive is: "
             <<sum<<std::endl;
    return 0;
}

