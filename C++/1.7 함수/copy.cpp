#include<bits/stdc++.h>
using namespace std;
int n = 3;
int main(void)  {
    vector<int> v {1,2,3};
    vector<int> ret(3);
    copy(v.begin(), v.end(), ret.begin());
    ret[1] = 100;
    cout << v[1] << "\n";
    cout << ret[1] << "\n";

    int a[3] = {1, 2, 3};
    int ret2[n];
    copy(a, a + n, ret2);
    cout << ret2[1] << "\n";
    ret2[1] = 100;
    cout << ret2[1] << "\n";
    cout << a[1] << "\n";

    return 0;

}