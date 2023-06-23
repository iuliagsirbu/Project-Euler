#include <iostream>
using namespace std;
bool check_palindrome(int x)
{
    int palindrome = 0, cx = x;
    while (cx)
    {
        palindrome = palindrome * 10 + cx % 10;
        cx = cx / 10;
    }
    return palindrome == x;
}
int main()
{
    int product = 1, max = 0;
    for (int i = 100; i <= 999; i++)
    {
        for (int j = i; j <= 999; j++)
        {
            product = i * j;
            if (check_palindrome(product) == true)
                if (product > max)
                    max = product;
        }
    }
    cout << max;
    return 0;
}