#include <iostream>

using namespace std;

const int SIZE = 8;
//default 매개변수
int sumArr(int*, int n = 1);

int main() {

    int arr[SIZE] = {1,2,3,4,5,6,7,8};

    // 두번째 매개변수에 값을 넣어주면 해당값을 사용하고, 넣어주지않으면 n=1을 사용함
    int total1 = sumArr(arr, SIZE);
    int total2 = sumArr(arr);

    cout << "total_1: " << total1 << endl;
    cout << "total_2: " << total2 << endl;

    return 0;
}

int sumArr(int* arr, int n) {

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    return total;
}