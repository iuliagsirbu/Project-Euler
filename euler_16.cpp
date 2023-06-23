#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string x = to_string(pow(2, 1000));
    int sum = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if (isdigit(x[i]))
            sum += x[i] - '0';
    }
    cout << sum;
    return 0;
}