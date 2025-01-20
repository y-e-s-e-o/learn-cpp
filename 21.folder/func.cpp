//사용 범위 결정 연산자 ::
void Stock::buy(int n, float pr)
{
    shares += n;
    share_val = pr;
    set_total();
}
void Stock::sell(int n , float pr)
{
    shares -= n;
    share_val = pr;
    set_total();
}
void Stock::update(float pr)
{
    share_val = pr;
    set_total();
}
void Stock::show()
{
    cout << "회사 명 : " << name << endl;
    cout << "주식 수: " << shares << endl;
    cout << "추가 : " << share_val << endl;
    cout << "주식 총 가치: " << total_val << endl;
}
//두개의 Stock을 비교해서 더 큰 share_val값을 가지는 stock을 반환하는 연산
Stock &Stock::topval(Stock& s)
{
    if(s.share_val > share_val){
        return s;
    }
    else{
        return *this;
    }
}
//두개
//Stock 객체 생성 연산
Stock::Stock(string co, int n, float pr)
{
    name = co;
    shares = n;
    share_val = pr;
    set_total();
}
Stock::Stock()
{
    name = " ";
    shares = 0;
    share_val = 0;
    set_total();
}
//Stock 객체 파괴
Stock::~Stock()
{
    cout << name << " 클래스가 소멸되었습니다.\n"; 
}