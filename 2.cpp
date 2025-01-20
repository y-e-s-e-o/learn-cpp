#include <iostream>

using namespace std;

int main() {
    
    // 배열(array): 같은 데이터형의 집합
    short month[12] = {1,2,3};
    cout << "month : " << month[1] << endl;

    int day[] = {1,2,3,4,5};
    cout << "day :" << day[3] << endl;


    // 배열로 문자열 관리하기
    char a[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << a << endl;

    char b[] = "Hello";
    cout << b << endl;


    /* 응용
    #include <cstring>

    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++Programming";

    cout << "안녕하세요! 저는" << name2 << "입니다!" << "성함이 어떻게 되시나요?" << endl;
    // cin >> name1; -> space 나 tap을 인식하지못하고, 문자가 끝났다고 생각함.
    cin.get(name1, Size); // 공백을 포함해 입력받기
    cout << "음, " << name1 << "씨. 당신의 이름은 " << strlen(name1) << "자 입니다만" << endl;
    cout << Size << " 바이트 크기의 배열에 저장되었습니다." << endl;
    cout << "이름이 " << name1[0] << "로 시작하는 군요." << endl;
    name2[3] = '\0';
    cout << "제 이름의 처음 세문자는 다음과 같습니다: " << name2 << endl;
    */


    // string
    string str1;
    string str2 = "abcde";

    str1 = str2; // char형은 불가능
    cout << str1 << endl;





    return 0;
}