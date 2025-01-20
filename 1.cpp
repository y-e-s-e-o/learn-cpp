#include <iostream>
#include <climits>

using namespace std;

int main() {
    

    // 정수
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    cout << "int는" << sizeof n_int << "바이트" << endl;
    cout << "int의 최대값은" << n_int << endl;

    unsigned int a = -1;
    cout << "unsigned int는" << sizeof a << "바이트" << endl;
    cout << "unsigned int의 최대값은" << a << endl;

    // 문자
    char b = '!';
    cout << "b: " << b << endl;

    // 문자열
    char c[] = {'a', 'b', 'c', '\0'}; 
    // null문자를 만나면 출력이 중지됨
    // 큰따움표는 명시적으로 null문자가 포함됨 -> string
    cout << "c: " << c << endl;

    char c2[] = "abc";
    cout << "c2: " << c2 << endl;

    string d = "abcde";
    cout << "d:" << d << endl;

    // bool
    bool e = 10;
    cout << "e: " << e << endl;

    // 상수
    const float PIE = 3.14; 
    int r = 3;
    float s = r*r*PIE;

    cout << "s: " << s << endl;

    // 데이터형 변환
    cout << "s: " << (int)s << endl;
    cout << "s: " << static_cast<int>(s) << endl;

    
    

    return 0;
}