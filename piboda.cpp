#include <iostream>
using namespace std;

int main()
{
    int num = 0, a = 0, b = 1;

    cin >> num;

    for (int i=0; i<num-1; ++i)
    {
        int tmp = b;
        b = a + b;
        a = tmp;
    }
    cout << b << endl;

    return 0;
}