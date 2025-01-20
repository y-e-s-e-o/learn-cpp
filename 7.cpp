#include <iostream>

using namespace std;

int main() {

    // 논리합 ||(or)
    // 논리곱 &&(and)

    cout << "당신의 나이를 입력하시오" << endl;
    int age;
    cin >> age;

    if (age < 0 || age > 100) {
        cout << "거짓말 하시면 안됩니다" << endl;
    }

    else if (20 <= age && age <= 29) {
        cout << "당신은 20대 이군요" << endl;
    }

    else {
        cout << "당신의 나이를 잘 모르겠습니다" << endl;
    }
    


    return 0;
}