#include <iostream>
using namespace std;
bool is_prime(int x)
{
    if (x <= 3)
        return x >= 2;
    if (x % 2 == 0 || x % 3 == 0)
        return 0;
    for (int d = 5; d * d <= x; d += 6)
    {
        if (x % d == 0 || x % (d + 2) == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n = 10001, check = 0;
    while (n)
    {
        check++;
        if (is_prime(check) == 1)
            n--;
    }
    cout << check;
    return 0;
}