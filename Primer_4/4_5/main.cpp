#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(10,5);
    auto pebg=v.begin();
    while(pebg!=v.end()&&*pebg>=0)
        cout<<*pebg++<<endl;
    return 0;
}
