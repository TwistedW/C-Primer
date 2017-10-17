#include<iostream>

int main( )
{
	std::cout<<"Enter two numbers: "<<std::endl;
	int number1=0, number2=0, mul=0;
	std::cin>>number1>>number2;
	mul=number1*number2;
	std::cout<<"The multiply of "<<number1;
	std::cout<<" and "<<number2;
    std::cout<<" is "<<mul<<std::endl;
    return 0;
}
