#ifndef STOCK
#define STOCK

using namespace std;

class Stock
{
private:
    string name;
    int shares;
    float share_val;
    double total_val;
    void set_total() {total_val = shares * share_val;}

public:
    //private에 접근할 수 있는 함수들
    void buy(int, float);
    void sell(int, float);
    void update(float);
    void show();
    Stock &topval(Stock&);
    Stock(string, int, float);
    Stock(); // 디폴트 생성자, 함수 오버로딩을 사용해 매개변수를 지정해주지 않아도 알아서 초기화되게 만드는 것
    ~Stock();
};

#endif
