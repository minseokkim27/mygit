#include <iostream>
using namespace std;

int count(char str[], char ch);

int main()
{
    char str[100];
    char ch;
    
    cout << "문자열을 검색하세요 \n";
    cin >> str;
    cout << "문자열에서 검색할 문자를 입력하십시오. \n";
    cin >> ch;
    
    int num = count(str, ch);

    cout << str << "안에" << ch << "은(는) 총" << num << "개 있습니다. \n";
    
    return 0;
}

int count(char str[], char ch)
{
    int rot = 0;
    int ch_num = 0;
    while (str[rot])
    {
        if(str[rot]==ch)
        {
            ch_num++;
            rot++;
        }
       
    }
    return ch_num;
}
