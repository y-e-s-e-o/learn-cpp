#include <iostream>

using namespace std;

template <typename Any> // typename 대신 class도 가능
Any sum (Any, Any);

template <typename Any> 
Any sum (int, Any);


int main() {
    //함수의 템플릿
    //구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의

    int a = 3;
    int b = 4;
    //cout << sum(a,b) << endl; //현재 코드에서는 두개의 함수에 모두 해당하기 때문에 오류 발생

    float c = 3.14;
    float d = 1.592;
    cout << sum(c, d) << endl;
 
    //a를 전달했을 때, 함수 sum은 정수형을 매개변수로 갖는 함수가 됨. 이 함수에 실수형을 전달했으니 오류가 발생함
    //cout << sum(a, c) << endl;
    cout << sum(a, c) << endl;

    return 0;
}

template <typename Any>
Any sum(Any a, Any b) {
    return a+b;
}

template <typename Any>
Any sum2(int a, Any b) {
    return a+b;
}
