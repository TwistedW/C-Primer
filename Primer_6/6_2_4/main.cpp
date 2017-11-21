#include <iostream>

using namespace std;

int compare(const int &val, const int *p)
{
    int ret;
    if(val>*p)
        ret=val;
    else
        ret=*p;
    return ret;
}
int main()
{
    cout << "Please inputs two numbers" << endl;
    int a, b;
    cin>> a >> b;
    cout<<"The bigger number is:"<< compare(a, &b)<<endl;
    return 0;
}
