// works, but it's slow
//  #include <iostream>
//  #include <cmath>
//  using namespace std;
//  bool is_prime(long long int x)
//  {
//      if (x <= 1)
//          return false;
//      if (x <= 3)
//          return true;
//      long long int range = sqrt(x);
//      if (x % 2 == 0 || x % 3 == 0)
//          return false;

//     for (long long int i = 5; i <= range; i += 6)
//     {
//         if (x % i == 0 || x % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }
// long long int largest_prime_factor(long long int x)
// {
//     long long int max = 0;
//     for (int i = 1; i <= sqrt(x); i++)
//     {
//         if (x % i == 0)
//             if (is_prime(i) == true)
//                 max = i;
//     }
//     return max;
// }
// int main()
// {
//     cout << largest_prime_factor(600851475143);
//     return 0;
// }

// this is better
#include <iostream>
#include <cmath>
using namespace std;

long long int largest_prime_factor(long long int x)
{
    long long int largestFactor = 0;

    while (x % 2 == 0)
    {
        largestFactor = 2;
        x /= 2;
    }

    for (long long int i = 3; i <= sqrt(x); i += 2)
    {
        while (x % i == 0)
        {
            largestFactor = i;
            x /= i;
        }
    }

    if (x > 2)
    {
        largestFactor = x;
    }

    return largestFactor;
}

int main()
{
    cout << largest_prime_factor(600851475143);
    return 0;
}
