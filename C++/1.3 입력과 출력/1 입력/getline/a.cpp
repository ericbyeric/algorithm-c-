#include <bits/stdc++.h>
using namespace std;
int T;
string s;
int main(){
    cin >> T;
    string bufferflush;
    getline(cin, bufferflush);
    for(int i = 0; i < T; i++){
        cout << i << '\n';
        getline(cin, s);
        cout << s << '\n';
    }
    return 0;
}