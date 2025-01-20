#include <iostream>

using namespace std;

int func(int);
int main() {
    //함수를 지시하는 포인터
    //어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용할 수 있다.
    cout << func << endl;//*없이 함수이름만 쓰면 됨

    int (*pointer)(int); //int형 매개변수를 가지는 int형 자료를 가리키는 포인터
    pointer = func;
    cout << pointer << endl;

    //포인터로 함수 호출
    cout << (*pointer)(3) << endl;

    return 0;
}

int func(int n) {

    return n+1;
}