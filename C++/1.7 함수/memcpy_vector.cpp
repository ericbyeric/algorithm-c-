#include<bits/stdc++.h>
using namespace std;
int main(void) {
    vector<int> v {1, 2, 3};
    vector<int> ret(3);

    memcpy(&ret, &v, sizeof(v));
    cout << ret[1] << "\n";
    ret[1] = 100;

    cout << v[1] << "\n";
    cout << ret[1] << "\n";

    if (is_trivial<vector<int>>())
        cout << "Hello Eric\n";

    return 0;

}