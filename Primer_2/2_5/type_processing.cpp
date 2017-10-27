#include <iostream>

using namespace std;

int main()
{
    int i=0, &r=i;
    auto a=r;
    std::cout <<"a="<<a<<std::endl;
    const int ci=5, &cr=ci;
    auto b=ci;
    auto c=cr;
    auto d=&ci;
    b=10, c=8;
    //d=6;
    std::cout <<"b="<<b<<" c="<<c<<" d="<<d<<std::endl;
    const int ii=42;
    auto j=ii;
    const auto &k=ii;
    auto *p=&ii;
    std::cout <<"j="<<j<<" k="<<k<<" p="<<*p<<std::endl;
    int aa=3, bb=4;
    decltype(aa) cc=aa;
    decltype((bb)) dd=aa;
    ++cc, ++dd;
    std::cout <<"cc="<<cc<<" dd="<<dd<<std::endl;
    return 0;
}
