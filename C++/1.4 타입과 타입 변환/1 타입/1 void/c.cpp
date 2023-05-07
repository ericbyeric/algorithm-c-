#include namespace std;
double a(); // 선언부
int main(){
    double ret = a();
    cout << ret << "\n";
    return 0;
}

double a(){ // 정의부
    return 1.2333;
}