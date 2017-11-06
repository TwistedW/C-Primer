#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    for(int i=0; i<=100; ++i)
        v1.push_back(i);
    cout<<"v1 size:"<<v1.size()<<endl;
    for(decltype(v1.size()) j=0; j<v1.size(); j++)
           cout<<v1[j]<<endl;
    return 0;
}
