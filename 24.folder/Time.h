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
    virtual void show(); // 가상 메서드
    /* 
    1. 기초 클래스에서 가상메스드를 선언하면,
    그 함수는 기초 클래스 및 파생되는 클래스에서 모두 가상이 된다.
    2. 객체에 대한 참조를 사용하거나, 객체를 지시하는 포인터를 사용하여
    가상메서드가 호출되면, 참조나 포인터를 위해 정의된 메서드를 사용하지 않고
    객체형을 위해 정의된 메서드를 사용한다. > 동적결합
    3. 상속을 위해 기초 클래스로 사용할 클래스를 정의할 때,
    파생 클래스에서 다시 정의해야 되는 클래스 메서드들은 가상 함수로 선언해야한다.
    */
    int getHours() {return hours;}
    int getMins() {return mins;}
    virtual~Time(); // 가상 메서드를 쓰지 않으면, delete times[i]에서 Time객체만 삭제됨

    //friend
    //멤버함수가 아니기 때문에, .이나 ->호출할 수 없음
    //하지만 멤버함수처럼 private에 접근할 수 있음
    friend Time operator*(int n, Time& t) {
        return t * n;
    }
    friend ostream& operator<<(ostream&, Time&);
};

class NewTime : public Time {
    private:
        int day;
    public:
        NewTime();
        NewTime(int, int, int);
        void show(); 
};

#endif