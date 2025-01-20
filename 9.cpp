#include <iostream>

using namespace std;

const float PIE = 3.14;
// 함수 원형 선언
float circle(int x);
void cheers(int n);

int main() {
    /*
    1. 리턴값이 있는 타입
    
    typeName functionName(parameterList) 
    {
        statement(s);
        retrun value;
    }
    

    2. 리턴값이 없는 타입

    void functionName(parameterList)
    {
        statement(s);
        return; // 생략될 수 있음
    }
    */

    int n;
    cout << "하나의 수를 입력하시오: ";
    cin >> n;
    cheers(n);


    int r;
    cout << "반지름을 입력하십시오: ";
    cin >> r;
    float b = circle(r);
    cout << "원의 넓이는 " << b << "입니다." << endl;


    return 0;
}

// 함수 정의
float circle(int x) {
    int s = x*x*PIE;
    return s;
}

void cheers(int n) {
    for (int i = 0; i < n; i++) {
        cout << "Cheers!" << endl;
    }
    
    return; // 생략 가능
}