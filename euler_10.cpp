#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void sieve_of_eratosthenes(int n)
{
    vector<int> v(n, 1);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (v[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
                v[j] = 0;
        }
    }
    long long int sum = 0;
    for (int i = 2; i <= n; i++)
        if (v[i] == 1)
            sum += i;
    cout << sum;
}
int main()
{
    sieve_of_eratosthenes(2000000);
    return 0;
}