#include <bits/stdc++.h>

using namespace std;

void solve(){

    int a , b;

    cin >> a >> b;

    int res = b - a;

    auto cost = [](int a, int b){
      a |= b;
      return 1 + (a - b);
    };
    for(int i = 0; i < b - a; i++) {
      res = min(res, i + cost(a + i, b));
    }
    for(int i = 0; i < res; i++) {
      res = min(res, i + cost(a, b + i));
    }
    cout << res << '\n';
}

int main()
{
    int t;

    cin >> t;

    while(t --){
        solve();
    }

    return 0;
}
