#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void is_upper(const string &word)
//只是判断大写字母，未改动，因此类型是const string &
{
    unsigned cnt = 0;
    for (auto &j : word)
        {
            if (isupper(j))
              {
                 cout << "First upper letter is: " << j << endl;
                 break;
              }
            else
            {
              ++cnt;
              continue;
            }
        }

    if (cnt == word.length())
        cout << "No upper letter existing !!!" << endl;

}


void to_lower(string &word)
//改写成小写字母，需要改动绑定对象，需要改写
{
    for (auto &j : word)
          j = tolower(j);
}


int main()
{
    cout << "please ipnut a stirng! " << endl;
    string word;
    cin >> word;

        cout << "calls is_upper(): " << endl;
        is_upper(word);
        cout << "calls to_lower(): " << endl;
        to_lower(word);
        cout << "Afer to_lower(): "  << word << endl;


    return 0;
}
