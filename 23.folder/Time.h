#ifndef TIMEH
#define TIMEH

using namespace std;

class Time
{
private:
    int hours;
    int mins;

public:
    Time();
    Time(int, int);
    void addHours(int);
    void addMins(int);
    Time operator+(Time&);
    Time operator*(int);
    void show();
    ~Time();

    //friend
    //멤버함수가 아니기 때문에, .이나 ->호출할 수 없음
    //하지만 멤버함수처럼 private에 접근할 수 있음
    friend Time operator*(int n, Time& t) {
        return t * n;
    }
    friend ostream& operator<<(ostream&, Time&);
};

#endif
