#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int factorial(int n);
int main()
{
    string euler = "0123456789";
    //* with built-in function
    // int count = 1;
    // while (next_permutation(euler.begin(), euler.end()))
    // {
    //     count++;
    //     if (count == 1000000)
    //     {
    //         cout << euler;
    //         break;
    //     }
    // }

    //* using mathematics
    // we start from 0, therefore we need the 999999th permutation
    int n = 9, start = 999999;
    string permutation = "";
    while (n >= 0)
    {
        int f = factorial(n);
        int place = start / f;
        start = start % f;
        permutation += euler[place];
        euler.erase(place, 1);
        n--;
    }
    cout << permutation;
    return 0;
}
int factorial(int n)
{
    int fact = 1;
    if (n == 0)
        return fact;
    else
        for (int i = 2; i <= n; i++)
            fact *= i;
    return fact;
}