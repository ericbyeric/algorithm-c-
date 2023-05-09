#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
    for(int i = 1; i <= 5; i++){
        v.push_back(i);
        cout << v[i - 1] << "\n";
    }
    for(int i = 1; i < 5; i++){
        cout << i << "번째 요소 : " << *(v.begin() + i) << "\n";
        cout << &*(v.begin() + i) << "\n";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
    cout << '\n';
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }

    auto it = v.begin();
    cout << *it << '\n';
    advance(it, 3);
    cout << '\n';
    cout << *it << '\n';

    return 0;
}