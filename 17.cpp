#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main() {
    //참조(reference)
    //참조연산자 &(주소연산자&가 참조연산자로 쓰임)
    //미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대용 이름
    //함수의 매개변수에 사용, 함수가 원본의 데이터를 사용하게 됨

    int a = 2;
    int b = 3;

    int& a2 = a;
    int& b2 = b;
    swapA(a2, b2);
    cout << "a: " << a << " b: " << b << endl; // 원본값이 바뀜

    int* p1 = &a;
    int* p2 = &b;
    swapB(p1, p2);
    cout << "a: " << a << " b: " << b << endl; // 원본값이 바뀜

    swapC(a, b);
    cout << "a: " << a << " b: " << b << endl; // 원본값이 유지됨


    return 0;
}

//참조로 전달하는 방식
void swapA(int& a, int& b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}

//포인터로 전달하는 방식
void swapB(int* a, int* b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

//값으로 전달하는 방식
void swapC(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}