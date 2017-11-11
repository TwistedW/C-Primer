#include <iostream>

using namespace std;

int get_value()
{
    int j;
    cin>>j;
    return j;
}

int main()
{
    int i=get_value();
    while(i!=42)
        i=get_value();
    cout << "Hello world!" << endl;
    int j;
    while((j=get_value())!=10);
        cout << "Hello world!" << endl;
    return 0;
}
