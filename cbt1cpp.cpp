// #include <iostream>
// using namespace std;
// class Time{
//     public:
//     int hour;
//     int min;
//     int seconds;
// };

// int main() {
//     Time t;
//     cin >> t.hour >> t.min;

//     int Time::*secondsPtr = &Time::seconds;
//     t.seconds = (t.hour*60 + t.min)*60;

//     cout <<"Total seconds: " << t.*secondsPtr;
    
      
//     return 0;
// }

#include <iostream>
using namespace std;
class Time_date{
    int hour, min, day, month , year;
    public:
    void insert(int hour, int min, int day, int month, int year){
        this->hour = hour;
        this->min = min;
        this->day = day;
        this->month = month;
        this->year = year;
    }

    ~Time_date(){
        if (cin.fail()){
            cout << "Invalid data input.";
        }else{
            cout << "Date: "<< day <<"-"<<month<< "-"<< year<<endl;
            cout << "Time: "<< hour<< " hrs "<< min<< " min"<<endl; 
        }

    }

};
int main(){
    Time_date t;
    int hr,min,day,mon,yr;
    cin>>hr>>min>>day>>mon>>yr;
    t.insert(hr,min,day,mon,yr);

}