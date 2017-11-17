#include <iostream>

using namespace std;

int main()
{
    string word, wordnext;

    if (cin >> word)
    {
        int i=0, j=0;
        while (cin >> wordnext)
        {
            ++i;
            if (word == wordnext&&word[0]>='A'&&word[0]<='Z'){
                cout << word <<" repeat"<< endl;
                break;
                }
            else
                {
                    word = wordnext;
                    ++j;
                }
        }
        if(i==j)
        cout << "no word repeat" << endl;
    }

    return 0;
}

