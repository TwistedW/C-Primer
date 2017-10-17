#include<iostream>

using namespace std;

int main()
{
    char c;
    int number1=0, number2=0;
    if(std::cin>>number1)
    {
        int i=1;
        while(std::cin>>number2)
        {
            if(number1==number2)
                i++;
            else{
                std::cout<<number1<<" occurs "
                         <<i<<" times "<<std::endl;
            }
            c=getchar();
            if(c=='\n')
                break;
        }
        std::cout<<number1<<" occurs "
                 <<i<<" times "<<std::endl;
    }
    return 0;
}
