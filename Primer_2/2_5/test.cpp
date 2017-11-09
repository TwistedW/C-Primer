#include <iostream>

using namespace std;

int main()

{
    int aa=3, bb=4;
    decltype(aa) cc=aa;
    decltype((bb)) dd=aa;
    ++cc, ++dd;
    std::cout <<"cc="<<cc<<" dd="<<dd<<std::endl;
    return 0;
}
