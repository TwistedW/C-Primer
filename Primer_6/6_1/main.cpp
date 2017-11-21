#include <iostream>
#include <localmath.h>

using namespace std;

int main()
{
    int j, input;
    cout<<"please input a number:";
    cin>> input;
    j = fact(input);
    cout << j << endl;
    return 0;
}

