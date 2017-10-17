#include <iostream>

using namespace std;

int main5()
{
    int numbermax=0, numbermin=0, number=0;
    std::cout<<"Enter two numbers:"<<std::endl;
    std::cin>>numbermax>>numbermin;
    //比较两个数大小按照从大到小输出
    if(numbermax<numbermin)
    {
        number=numbermax;
        numbermax=numbermin;
        numbermin=number;
    }
    number=numbermin+1;
    std::cout<<"The number from "<<numbermin<<" to "
                 <<numbermax<<" contains: "<<std::endl;
    while(number<numbermax)
    {
        std::cout<<number<<std::endl;
        number++;
    }
    return 0;
}
