#include <iostream>

using namespace std;

int main()
{
    string init_s;
    string change_s;
    cout<<"Please input a string"<<endl;
    cin>>init_s;
    for(decltype(init_s.size()) index=0; index!=init_s.size(); ++index){
        if(!ispunct(init_s[index])){
            change_s+=init_s[index];
        }
    }
    cout<<change_s<<endl;
    return 0;
}
