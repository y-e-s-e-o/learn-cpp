#include <iostream>

using namespace std;

//함수의 오버로딩
//여러 개의 함수를 같은 이름으로 연결
int sum(int, int);
float sum(float, float);

int main() {
    int a, b;
    cout << "두 자연수를 입력하세요: " << endl;
    cin >> a;
    cin >> b;
    
    cout << "int sum: " << sum(a, b) << endl;

    float c, d;
    cout << "두 실수를 입력하세요: " << endl;
    cin >> c;
    cin >> d;

    cout << "foat sum: " << sum(c, d) << endl;

    return 0;
}

int sum(int a, int b) {

    return a+b;
}

float sum(float a, float b) {
    
    return a+b;
}



