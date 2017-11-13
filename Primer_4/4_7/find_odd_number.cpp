#include <iostream>
#include <vector>

using namespace std;

int main1()
{
    vector<int> number;
    for(int i=0; i<16; ++i)
        number.push_back(i);
    for(int i=0; i<16; ++i)
        if(number[i]%2!=0)
            number[i]=number[i]*2;
    for(auto num1:number)
        cout << num1 << endl;
    return 0;
}
