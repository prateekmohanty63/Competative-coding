#include <iostream>
#include <math.h>
using namespace std;

bool excelletNumber(int a, int b, int n)
{
    int temp = n;
    int flag = 0;
    while (temp != 0)
    {
        int c = temp % 10;
        if (c != a && c != b)
        {
            return false;
        }
        temp /= 10;
    }

       return true;
}

int beautifulNumbers(int a, int b, int n)
{
    int start = pow(10, n - 1);
    int end = pow(10, n + 1);
    int count = 0;

    for (int i = start; i < end; i++)
    {
        if (excelletNumber(a, b, i))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    cout << beautifulNumbers(a, b, n);
    return 0;
}