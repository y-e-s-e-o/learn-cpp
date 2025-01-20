#include<iostream>
#include"stock.h"
#include"func.cpp"

int main() {
    //추상화와 클래스
    //클래스란? 추상화를 사용자 정의 데이터형으로 변환해주는 수단
    //추상화란? 어떠한 객체를 사실적으로 표현하는 것이 아니라,
    //공통된 특징을 간결한 방식으로 표현하는 것

    /*
    1. 클래스 선언
    2. 클래스 매서드 정의
    */
    cout << "디폴트 생성자를 이용해 객체 생성\n";
    Stock temp;

    cout << "생성자를 이용해 객체 생성1\n";
    Stock temp1 = Stock("Panda1", 100, 1000);

    cout << "생성자를 이용해 겍체 생성2\n";
    Stock temp2("Panda2", 100, 1000);
    

    //클래스 배열
    Stock s[4] = {
        Stock("A", 10, 1000),
        Stock("B", 20, 1200),
        Stock("C", 30, 1300),
        Stock("D", 40, 1400)
    };

    Stock *first = &s[0];

    for (int i = 1; i < 4; i++) {
        first = &first->topval(s[i]);
    }

    first->show();


    return 0;
}