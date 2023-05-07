#include <bits/stdc++.h>
using namespace std;

int fibo(int input){
    cout << "fibo : " << input << '\n';
    if (input == 0 || input == 1) return input;
    return fibo(input - 1) + fibo(input - 2);
}

int fact(int input){
    cout << "fact : " << input << '\n';
    if (input == 0 || input == 1) return 1;
    return input * fact(input - 1);
}

int main(){
    // cout << fibo(7) << '\n';
    cout << fact(10) << '\n';
    return 0;
}