#include <iostream>
using namespace std;

void permutation(string a, int l, int r)
{
    if (l == r)
        cout << a << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            // swapping done
            swap(a[l], a[i]);

            // recursively called
            permutation(a, l + 1, r);

            // backtracking
            swap(a[l], a[i]);
        }
    }
}

int main()
{
    string a;
    cin >> a;
    int b = a.length();
    permutation(a, 0, b - 1);
    return 0;
}