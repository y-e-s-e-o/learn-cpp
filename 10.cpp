#include <iostream>

using namespace std;

void nprint(int, int);

int main() {

    int n;
    cout << "숫자를 입력하세요: ";
    cin >> n;
    
    int m;
    cout << "숫자를 하나 더 입력하세요: ";
    cin >> m;

    nprint(n, m);

    return 0;
}

void nprint(int n, int m) {

    for (int i = 0; i < n; i++) {
        cout << "hello" << endl;
    }

    for (int j = 0; j < m; j++) {
        cout << "!" << endl;
    }
}