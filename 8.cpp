#include <iostream>

using namespace std;

const int SIZE = 20;
int main() {

    // switch
    /*
    int a;
    cout << "a입력: ";
    cin >> a;

    switch (a) {
        case 1:
            cout << "1!" << endl;
            break;
        case 2:
            cout << "2!" << endl;
            break;
        case 3:
            cout << "3!" << endl;
            break;
        default:
            cout << "x!" << endl;
            break;
    }
    */

    // continue
    cout << "문장을 입력하시오 " << endl;;
    char line[SIZE];
    cin.get(line, SIZE);

    cout << "입력하신 문장은 ";

    int space = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        cout << line[i];

        if (line[i] != ' ') {
            continue;
        }

        space++;
    }

    cout << " 입니다." << endl;
    cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << space << "개 입니다." << endl;


    return 0;
}
