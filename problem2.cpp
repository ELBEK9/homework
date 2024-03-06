#include <iostream>
using namespace std;


class Timer{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Timer(int h, int m, int s) {
    this->hours = h; 
    this->minutes = m; 
    this->seconds = s;
}
    void changeTime(){
        if (seconds>=60) {
            minutes= minutes + (seconds/60);
            seconds= seconds%60;
        }
        if (minutes>=60) {
            hours= hours +(minutes/60);
            minutes= minutes % 60;
        }
        if (hours >= 24) {
            hours= hours % 24;
        }  
    }
    
    void printTime() {
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }

};

int main()
{
    int h, m, s;
    cin>>h>>m>>s;
    Timer timer(h, m, s);
    timer.changeTime();
    timer.printTime();

    return 0;
}
