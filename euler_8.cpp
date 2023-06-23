#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("euler.in");
int main()
{
    int v[1001];
    long long int product, max;
    string thousand, x;
    while (fin >> x)
        thousand += x;
    for (int i = 0; i < thousand.size(); i++)
        v[i] = thousand[i] - '0';
    int i = 0;
    while (i + 13 <= 1001)
    {
        product = 1;
        for (int j = i; j < i + 13; j++)
            product *= v[j];
        // cout << i << " " << product << endl;
        if (product > max)
            max = product;
        i++;
    }
    cout << max;
    return 0;
}