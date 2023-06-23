#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 1, c, s = 0;
    while ((a + b) <= 4000000)
    {
        c = a + b;
        if (c % 2 == 0)
            s += c;
        a = b;
        b = c;
    }
    cout << s;
    return 0;
}