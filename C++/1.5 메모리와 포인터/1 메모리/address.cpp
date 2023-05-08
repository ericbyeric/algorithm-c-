#include <bits/stdc++.h>
using namespace std;
int i;
string s = "Eric";
int main(){
    cout << &i << '\n';
    i = 0;
    cout << &i << '\n';

    int * a = &i;
    cout << a << '\n';

    string * b = &s;
    printf("%s\n", (*b).c_str());
    return 0;
}