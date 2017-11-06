#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[10], b[10];
    for(size_t i=0; i!=10; ++i)
        a[i]=i;
    for(auto i: a)
        cout << i << endl;
    for(size_t j=0; j!=10; ++j)
        b[j]=a[j];
    for(auto i: b)
        cout<< i <<endl;
    vector<int> s, v;
    for(decltype(s.size()) ix=0; ix!=10; ++ix)
        s.push_back(ix);
    for(auto i: s)
        cout<< i <<endl;
    for(auto it=s.begin(); it!=s.end(); ++it)
        v.push_back(*it);
     for(auto i: v)
        cout<< i <<endl;
    return 0;
}
