#include <iostream>
#include "struct.h"
#include "func.cpp"

/* 헤더파일
1. 함수 원형
2. #define이나 const를 사용하는 기호 상수
3. 구조체 선언
4. 템플릿 선언
5. 인라인 함수
*/

int main() {

    Student student1 = {"yeseo" , 23};
    display(student1);


    return 0;
}

