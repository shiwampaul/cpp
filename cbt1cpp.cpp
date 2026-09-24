#include <iostream>
using namespace std;
class Time{
    public:
    int hour;
    int min;
    int seconds;
};

int main() {
    Time t;
    cin >> t.hour >> t.min;
    
    int Time::*secondsPtr = &Time::seconds;
    t.seconds = (t.hour*60 + t.min)*60;

    cout << t.*secondsPtr;
    
      
    return 0;
}