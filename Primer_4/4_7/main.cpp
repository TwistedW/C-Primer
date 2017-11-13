#include <iostream>

using namespace std;

int main()
{
    int grade;
    cin>>grade;
    if(grade>100||grade<0)
        cout<<"Please input a correct grade"<<endl;
    else{
    string finalgrade;
    finalgrade = (grade>90) ? "High pass!" : (grade<60) ? "Final!" : (grade<75) ? "Low Pass!" : "Pass";
    cout << finalgrade << endl;
    }
    return 0;
}
