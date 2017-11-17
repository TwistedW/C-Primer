#include <iostream>

using namespace std;

int main()
{
    string word, wordnext;

    if (cin >> word)
    {
        int wordCnt = 1;
        while (cin >> wordnext)
        {
            if (word == wordnext)
                ++wordCnt;
            else
                {
                    cout << word << " occurs " << wordCnt << " times" << endl;
                    word = wordnext;
                    wordCnt = 1;
                }
        }
        cout << word << " occurs " << wordCnt << " times" << endl;
    }

    return 0;
}
