#include <iostream>

#define SIZE 20

using namespace std;

struct MyStruct
{
    char name[20];
    int age;
};

int main() {

    // 포인터: 사용할 주소에 이름을 붙인다.
    // 간접값 연산자, 간접 참조 연산자 *
    /*
    int *a; // c
    int* b; // c++
    int* c, d; // c는 포인터 변수, d는 int형 변수
    */
    
    int a = 6;
    int* b = &a;

    cout << "a의 값 " << a << endl;
    cout << "*b의 값" << *b << endl;
    cout << "a의 주소" << &a << endl;
    cout << "b의 값" << b << endl;



    // new 연산자
    /* 
    어떤 데이터 형을 원하는지 new연산자에게 알려주면, 
    new연산자는 그에 알맞은 크기의 메모리 블록을
    찾아내고 그 불록의 주소를 리턴
    */

    int* pointer = new int;

    // delete 연산자
    /*
    사용한 메모리를 다시 메모리 폴로 환수
    규칙
    1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다.
    2. 같은 메모리 블록을 연달아 두번 해제할 수 없다.
    3. new[]로 메모리르 대입할 경우 delete[]로 헤제한다.
    4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.
    */

    delete pointer;



    // 포인터 연산
    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[0]: " << p3[0] << endl;
    
    p3 = p3+1;
    cout << "p3[0]: " << p3[0] << endl;

    cout << "ps: " << p3 << endl;
    p3 = p3-1;
    delete[] p3;



    // 동적 구조체 생성
    MyStruct* temp = new MyStruct; // 구조체 선언에 쓰인 MyStruct는 하나의 자료형이다.

    cout << "당신의 이름을 입력하십시오\n";
    cin >> temp->name;

    cout << "당신의 나이를 입력하십시오\n";
    cin >> (*temp).age;

    cout << "안녕하세요! " << temp->name << " 씨!\n";
    cout << "당신은 " << temp->age << " 살 이군요!\n";





    


    return 0;
}