#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,3};
    do{
        for(int i : a) cout << i << " ";
        cout << '\n';

    }while (next_permutation(&a[0], &a[0] + sizeof(a)/sizeof(*a)));
    // }while (next_permutation(a, a + 3);

    vector<int> b = {1,2,3};
    do{
        for(int i : b) cout << i << " ";
        cout << '\n';
    }while (next_permutation(b.begin(), b.end()));

    // 5개중 2를 뽑을때 (순서 고려해서)
    vector<int> d = {2, 1, 3, 5, 100, 300};
    sort(d.begin(), d.end());
    do {
        for(int i = 0; i < 2; i++){
            cout << d[i] << " ";
        }
        cout << '\n';
    }while (next_permutation(d.begin(), d.end()));
    
} 