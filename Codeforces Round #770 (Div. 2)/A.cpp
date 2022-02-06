#include <iostream>

using namespace std;

int main(){

    int times;

    int n = 0, k = 0;

    string str;

    cin >> times; 

    for(int t = 0; t < times; t ++){

        cin >> n >> k;

        cin >> str;
        
        string rev_str; 

        for(int i=n-1;i>=0;i--)
            rev_str.push_back(str[i]);

        cout << ( (k >= 1 && (str != rev_str)) ? 2 : 1 ) << endl; 
    }

    
    return 0;
}