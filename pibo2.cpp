#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a=1, b=1, c;

    for(int i=1; i<=n; i++)
    {
        cout << a << "\n";

        c=a+b;
        a=b;
        b=c;
    }
    cout << endl;

    return 0;
}