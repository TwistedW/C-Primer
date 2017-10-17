#include<iostream>

using namespace std;

int main7()
{
    char c;
    int number=0, sum=0;
    while(std::cin>>number)
    {
        sum=sum+number;
        c=getchar();
        if(c=='\n')
            break;
    }

    std::cout<<"The numbers sum is: "<<sum<<std::endl;
    return 0;
}
