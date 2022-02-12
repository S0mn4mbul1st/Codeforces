#include <iostream>

using namespace std;

void solve(){

    int n;
    cin >> n;
 
    int lb = 0;
    while((1 << (lb+1)) < n)
        lb++;
  
    for(int i = (1<<lb) - 1; i >= 0; i--) cout << i << ' ';
    for(int i = (1<<lb); i < n; i++) cout << i << ' ';
    cout << '\n';
}

int main()
{
    int t;

    cin >> t;

    while(t > 0){
        solve();
        t --;
    }

    return 0;
}
