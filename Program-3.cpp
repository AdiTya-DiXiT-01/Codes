#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    if (!n)
        return 0;

    if (n % 2 == 0)
    {
        n--;
    }
    while (n--)
    {
        cout << i << " ";
        i = i + 2;
    }
    return 0;
}
