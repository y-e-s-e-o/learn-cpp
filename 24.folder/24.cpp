#include<iostream>
#include"Time.h"
#include"func.cpp"

const int MAX = 3;

int main() {
    /*
    상속의 기능
    1. 기존의 클래스에 새로운 기능을 추가할 수 있다.
    2. 클래스가 나타내고 있는 데이터에 다른 것을 더 추가할 수 있다.
    3. 클래스 메서드가 동작하는 방식을 변경할 수 있다. 
    */
    Time temp1(30, 2);
    NewTime temp2(3, 30, 2);
    
    temp1.show();
    temp2.show();
   
    //동적결합 
    /* 
    Time과 NewTime객체는 근본적으로 다른 데이터형이여서 같은 배열에 담을 수 없음
    대신 Time을 가리키는 포인터들을 배열로 담을 수 있음
    */
    Time* times[MAX];
    int day;
    int hours;
    int mins;

    for (int i = 0; i < MAX; i++) {
        cout << i+1 << "번째 원소를 정의합니다." << endl;
        cout << "시간을 입력하십시오." << endl;
        cin >> hours;
        cout << "분을 입력하십시오." << endl;
        cin >> mins;
        char check;
        cout << "일 정보가 있다면 1, 없다면 0을 입력하십시오." << endl;
        cin >> check;
        
        if (check == '0') {
            times[i] = new Time(hours, mins);
        }
        else {
            cout << "일을 입력하십시오." << endl;
            cin >> day;
            times[i] = new NewTime(hours, mins, day);
        }
    }

    for (int i = 0; i < MAX; i++) {
        cout << i+1 <<"번째 정보입니다." << endl;
        times[i] -> show();
    }

    for (int i = 0; i < MAX; i++) {
        delete times[i];
    }
     

    return 0;
}