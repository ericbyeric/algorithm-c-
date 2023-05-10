#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    vector<int> a {1,2,2,2,2,2,2,2,2,3,3,3,4};
    cout << &*lower_bound(a.begin(), a.end(), 3) - &*a.begin() << "\n";
    vector<int> b {0, 0, 0, 0};
    cout << &*(b.begin() + 3) - &*b.begin() << '\n';

    //cout << "b.begin()" << b.begin() << '\n';
    cout << "*b.begin() " << *b.begin() << '\n';
    cout << "&*b.begin() " << &*b.begin() << '\n';

    cout << *lower_bound(a.begin(), a.end(), 3) << '\n';



    vector<int> c {1,2,3,3,3,3,4,100};
    cout << upper_bound(c.begin(), c.end(), 3) - lower_bound(c.begin(), c.end(), 3) << "\n";
    
    cout << "\n\n\n";
    // 값이 없는 경우 근방의지점을 반환한다.
    vector<int> v;
    for(int i = 2; i <= 5; i++) v.push_back(i);
    v.push_back(7);
    v.push_back(8); // 2 3 4 5 7 8
    
    cout << upper_bound(v.begin(), v.end(), 5) - v.begin() << "\n";
    cout << lower_bound(v.begin(), v.end(), 5) - v.begin() << "\n";
    cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
    cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
    cout << upper_bound(v.begin(), v.end(), 7) - v.begin() << "\n";
    cout << lower_bound(v.begin(), v.end(), 7) - v.begin() << "\n";
}


