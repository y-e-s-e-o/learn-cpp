#include <iostream>

using namespace std;

// 구조체
struct Student
{
    string name;
    string sex;
    int height;
    int weight;

} A;

// 공용체(union)
// 서로 다른 데이터 형을 한번에 한가지만 보관할 수 있음
union MyUnion
{
    int intVal;
    long longVal;
    float floatVal;
};

// 열거체(enum)
// 기호 상수를 만드는 것에 대한 또다른 방법
// 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만들어줌
enum spectrum {red, orange, yellow, green, blue, biolet, indigo, ultraviolet};

int main() {

    A.name = "woojin";
    A.sex = "M";
    A.height = 0;
    A.weight = 0;

    Student B = {"yeseo", "W", 169, 49};

    Student class1[2] = {
        {"yeseo" ,"W", 169, 49},
        {"woojin", "M", 0, 0}
    };

    cout << "Student1: " << class1[0].name << endl;
    cout << "Student2: " << class1[1].name << endl;





    MyUnion test;
    test.intVal = 3;
    cout << test.intVal << endl; // 3으로 출력

    test.longVal = 33;
    cout << test.intVal << endl; // 33으로 출력
    cout << test.longVal << endl; // 33으로 출력

    test.floatVal = 3.3;
    cout << test.intVal << endl; // 1079194419 출력
    cout << test.longVal << endl; // 1079194419 출력
    cout << test.floatVal << endl; // 3.3으로 출력
    




    spectrum a = orange;
    cout << a << endl;

    int b = a; // 열거체 자체로는 연산이 불가능
    cout << b+3 << endl;


    enum spectrum2 {first = 1, second = 3, third = 5, fourth, fifth};

    spectrum2 c = second;
    spectrum2 d = fifth;
    cout << c << endl;
    cout << d << endl; // 직접 지정하지 않은 열거자들은 이전 열거자의 값에서 1씩 증가해서 초기화됨



    return 0;
}