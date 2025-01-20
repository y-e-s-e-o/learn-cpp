#include<iostream>
#include"Time.h"
#include"func.cpp"

int main() {
    // << 연산자 오버로딩
    // Time t1(3, 25)로 생성한 t1을, tl.show()대신 cout << t1으로
    
    Time t1(3, 45);

    cout << t1 << "\n";

    return 0;
}