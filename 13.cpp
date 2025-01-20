#include <iostream>

using namespace std;

void countDown(int);

int main() {

    //재귀호출
    int n;
    cout << "정수를 입력하세요: ";
    cin >> n;
    countDown(n);


    return 0;
}

void countDown(int n) {
    cout << "Couting..." << n << endl;

    if (n > 0) {
        countDown(n-1);
    }
    
    cout << n << "번째 재귀함수" << endl;
}