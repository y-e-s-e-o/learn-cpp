#include <iostream>

using namespace std;

int main() {

    // while
    string str = "Panda";

    int i = 0;
    while(str[i] != '\0') {

        cout << str[i] << endl;
        i++;
    }

    // do while
    int j = 0;
    do
    {
        cout << "do while문 입니다." << endl;
        j++;

    } while (j < 3);
    

    //배열 기반 반복문
    int a[5] = {1, 2, 3, 4, 5};

    for (int i : a) {
        cout << i << endl;
    }


    // 중첩 루프
    int temp[2][3] = {
        {1,2,3}, 
        {1,2,3}, 
    };

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {

            cout << temp[row][col] << " ";
        }
        cout << "\n";
    }


return 0;
}