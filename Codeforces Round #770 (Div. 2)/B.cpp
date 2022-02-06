#include <iostream>

using namespace std;


void solve() {

    int n, x; 
    long long y;
	scanf("%d%d%lld", &n, &x, &y);
	int t = x & 1;
	for (int i = 1, v; i <= n; i++) scanf("%d", &v), t ^= (v & 1);
	printf("%s\n", ((y & 1) == t) ? "Alice" : "Bob");
}

int main(){

    int times; 

    cin >> times; 

    while(times--) solve(); 

    return 0;
}