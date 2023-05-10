#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
int main() {
    vector<int> v{1, 1, 2, 2, 3, 3};
    // map을 구성 {key : 1} 형식으로
    for(int i : v){
        if(mp[i]){
            continue;
        }else{
            mp[i] = 1;
        }
    }

    // 새로운 vector를 채워줘
    vector<int> ret;
    for(auto it : mp){
        ret.push_back(it.first);
    }

    // 순회하면서 출력
    for(int i : ret) cout << i << '\n';
}