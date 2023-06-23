#include <iostream>
using namespace std;
int main()
{
    int ok = 0;
    long int multiple = 1;
    while (ok == 0)
    {
        int check = 0;
        for (int i = 11; i <= 20; i++)
        {
            if (multiple % i != 0)
                check = 1;
        }
        if (check == 0)
            ok = 1;
        else
            multiple++;
    }
    cout << multiple;
    return 0;
}