#include <iostream>
using namespace std;
int main()
{
    int sum_of_squares = 0, square_of_sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum_of_squares += i * i;
        square_of_sum += i;
    }
    square_of_sum = square_of_sum * square_of_sum;
    cout << abs(sum_of_squares - square_of_sum);
    return 0;
}