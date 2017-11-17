#include <iostream>

using namespace std;

int main()
{
    unsigned aCnt=0, eCnt=0, iCnt=0, oCnt=0, uCnt=0, spaceCnt=0, tableCnt=0, trCnt=0;
    char ch;
    while((ch=getchar()) != EOF)
    {
        switch(ch){
    case 'a':
    case 'A':
        ++aCnt;
        break;
    case 'e':
    case 'E':
        ++eCnt;
        break;
    case 'i':
    case 'I':
        ++iCnt;
        break;
    case 'o':
    case 'O':
        ++oCnt;
        break;
    case 'u':
    case 'U':
        ++uCnt;
        break;
    case ' ':
        ++spaceCnt;
        break;
    case '\t':
        ++tableCnt;
        break;
    case '\n':
        ++trCnt;
        break;
    default:
        break;
        }
    }
    cout << "Number of vowel a: \t" <<aCnt<< endl;
    cout << "Number of vowel e: \t" <<eCnt<< endl;
    cout << "Number of vowel i: \t" <<iCnt<< endl;
    cout << "Number of vowel o: \t" <<oCnt<< endl;
    cout << "Number of vowel u: \t" <<uCnt<< endl;
    cout << "Number of vowel space: \t" <<spaceCnt<< endl;
    cout << "Number of vowel table: \t" <<tableCnt<< endl;
    cout << "Number of vowel line feed: \t" <<trCnt<< endl;
    return 0;
}
