#include <iostream>

using namespace std;

int main()
{
    constexpr size_t rowCnt=3, colCnt=4;
    size_t cnt=0;
    int a[rowCnt][colCnt];
    for(size_t i=0; i!=rowCnt; ++i)
        for(size_t j=0; j!=colCnt; ++j)
        {
            a[i][j]=i*colCnt + j;
            cout << a[i][j]<< endl;
        }
    for(auto &row:a)
        for(auto &col:row)
    {
        col = cnt;
        ++cnt;
        cout << col << endl;
    }
    for(auto p=a; p!=a+3; ++p)
        for(auto q=*p; q!=*p+4; ++q)
            cout<<*q<<endl;
    return 0;
}
