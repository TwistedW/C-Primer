#include <iostream>

using namespace std;

int main()
{
    const int ci=1024;
    const int &r1=ci;
    const int &r2=r1*2;
    std::cout <<"r1="<<r1<<" r2="<<r2<< std::endl;
    const double pi=3.14;
    const double *cptr=&pi;
    std::cout <<"cptr="<<*cptr<< std::endl;
    return 0;
}
