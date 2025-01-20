#include <iostream>

using namespace std;

const int SIZE = 8;
// 함수에는 배열 전체를 전달할 수 없고, 함수는 배열 전체를 return할 수 없다.
int sumArr(int*, int*); // == int sumArr(int arr[], int) -> 여기서 전달되는 인자는  배열의 첫번째 원소의 주소 (배열의 이름은 첫번째 원소의 주소를 의미)

int main() {

    int arr[SIZE] = {1,2,3,4,5,6,7,8};
    int sum = sumArr(arr, arr+3); // 배열의 이름은 첫번째 원소의 주소이기 때문에 배열이름으로만 전달가능함

    cout << "함수의 세번째 원소까지의 합은 " << sum << "입니다." << endl;

    return 0;
}

int sumArr(int* begin, int* end){

    int total = 0;
    for (int* i = begin; i != end; i++) {

        total += *i;
    }

    return total;
}