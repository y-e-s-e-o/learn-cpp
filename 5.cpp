#include <iostream>

using namespace std;

int main() {

    char a[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    cout << a << endl;

    // for반복문
    for (int i = 0; i < 5; i++) {
        
        cout << a[i] << endl;
    }



    // 증가 연산자, 감소 연산자
    int c = 10;
    int d = 10;

    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "c++: " << c++ << endl;
    cout << "++d: " << ++d << endl;
    
    return 0;
}