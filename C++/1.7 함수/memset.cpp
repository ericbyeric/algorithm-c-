#include<bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int a[max_n];
int a2[max_n][max_n];
char b = 'a';
int main(){
    memset(a, b, sizeof(a));
    memset(a2, 0, sizeof(a2));
    for(char i : a) cout << i << " ";
    return 0;
}