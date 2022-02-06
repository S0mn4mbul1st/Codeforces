#include <iostream>

using namespace std;

void solve()
{
    int a[505][505];

    int n, k;

    cin >> n >> k;

    if (k == 1)
    {
        cout << "YES\n";
        for (int i = 1; i <= n; ++i)
            cout << i << '\n';
        return;
    }

    if (n % 2 == 1)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    for (int i = 1; i <= n; i += 2)
    {
        int bg = (i - 1) * k + 1;
        int tbg = bg + 1;
        for (int j = 1; j <= k; ++j)
            a[i][j] = bg, bg += 2;
        for (int j = 1; j <= k; ++j)
            a[i + 1][j] = tbg, tbg += 2;
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= k; ++j)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
}

int main()
{

    int times;

    cin >> times;

    while (times--)
        solve();

    return 0;
}