#include <iostream>

using namespace std;

inline float square(float x) {return x * x;}
int main() {
    //인라인 함수: 프로그램의 실행속도를 높이기 위함
    /*
    일반적으로 함수의 호출은 함수의 주소로 점프하는 과정
    인라인 함수는 컴파일된 함수 코드가 프로그래밍의 다른 코드에 삽입
    컴파일러의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함ㅁ수 코드로 대체
    */

    int a = 5;
    cout << "한변의 길이가 " << a << "인 정사각형의 넓이는 ";

    int s = square(a);
    cout << s << "입니다." << endl;


    return 0;
}