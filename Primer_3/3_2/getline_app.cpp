
#include <iostream>

using namespace std;

int main2()
{
    string line;
    while(getline(cin, line))
        if (!line.empty())
            cout<<line<<endl;
    return 0;
}
