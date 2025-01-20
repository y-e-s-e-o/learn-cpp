#include <iostream>

using namespace std;

// 구조체는 그 자체로 함수에 전달될 수 있고, 함수는 구조체를 직접 return할 수 있다.
// 구조체를 직접 함수에 전달할 때, 구조체의 복사본을 사용해 작업하기 때문에, 구조체를 포인터로 전달하면 성능을 향상할 수 있음
struct Time
{
    int hours;
    int mins;
};

const int minsPerHr = 60;
Time sum(Time*, Time*);
void showTime(Time);

int main() {

    Time day1 = {5, 45};
    Time day2 = {4, 55};

    Time total = sum(&day1, &day2); // 배열과 다르게 구조체이름은 주소가 될 수 없기때문에 &사용
    
    cout << "이틀간 소요시간: ";
    showTime(total);


    return 0;
}

Time sum(Time* t1, Time* t2) {
    Time total;

    // 구조체의 값에서 멤버에 접근할 때는 .
    // 구조체의 주소에서 멤버에 접근할 때는 -> 
    total.mins = (t1 -> mins + t2 -> mins) % minsPerHr;
    total.hours = t1 -> hours + t2 -> hours + (t1 -> mins + t2 -> mins) / minsPerHr;

    return total;
}

void showTime(Time t1) {
    cout << t1.hours << "시간 " << t1.mins << "분." << endl;
}