#include <iostream>
#include <localmath.h>

using namespace std;

int main()
{
    int i=30;
    cout << "i initial:" << i << endl;
    reset(&i);
    cout << i << endl;
    return 0;
}
