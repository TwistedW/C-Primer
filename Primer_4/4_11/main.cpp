#include <iostream>

using namespace std;

int main()
{
    unsigned int ui=3;
    float fval=-2.5;
    double dval;
    char cval;
    dval = ui * fval;
    cval = -dval - fval;
    cout << dval << endl;
    cout << cval << endl;
    return 0;
}
