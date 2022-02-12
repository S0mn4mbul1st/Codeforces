#include <iostream>

using namespace std;

string solve(){
    int n;

    string s;

    cin >> n >> s;

    int one = 0, zero = 0;

    for(int i = 0 ; i < n; i ++)

        (s[i]=='1') ? one++ : zero ++;

    string ans = (one > 1 or zero > 1) ? "NO" : "YES";

    return ans;
}

int main()
{
    int t;

    cin >> t;

    while(t > 0){
        cout << solve() << endl;
        t --;
    }

    return 0;
}
