#include <iostream>

using namespace std;

int fact(int val)
{
    int ret=1;
    for(int i=1; i!=val+1; ++i){
        ret*=i;
    }
    return ret;
}
int main()
{
    int j=fact(10);
    cout << j << endl;
    return 0;
}
