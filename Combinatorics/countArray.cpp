#include <iostream>
using namespace std;

long int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;

    return n * fact(n - 1);
}

int countArray(int n, int m)
{
    long int a = fact(m) / fact(n) * fact(m - n);

    long int res = a * n / 2;

    return res % 998244353;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << countArray(n, m);
    return 0;
}