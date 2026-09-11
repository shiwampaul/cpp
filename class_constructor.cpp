#include <iostream>
using namespace std;

class Shivam{
    string name;
    string standard;
    int marks;
    string message;
    double fees;
    public:
    Shivam(){
        cout<< "Enter name: " ; cin >> this->name;
        cout << "Enter class: "; cin >> this->standard;
        cout << "Enter marks: "; cin >> this->marks;
        cout << "Enter fees: "; cin >> this->fees;
    }
    void submit_fees(double amount);
    void update_marks(int mark, int option);
    ~Shivam(){
        cout << "Name of the student: "<< name<< endl;
        cout << "Current class of student: "<< standard<< endl;
        cout << "Marks secured by student: "<< marks<<endl;
        cout << "Current fees of student: "<<fees<< endl;
    }

};
void Shivam::submit_fees(double amount){
    fees -= amount;
}
void Shivam::update_marks(int mark, int option){
    cout << "Choose :"<<endl;
    cout << "1. To increase Marks"<<endl;
    cout << "2. To decrease Marks"<<endl;
    if (option == 1){
        marks += mark;
    }
    else{
        marks -= mark;
    }
}

int main() {
    Shivam s;

    int marks, option;
    cout << "Enter marks and option 1 or 0 to increase and decrease marks"<< endl;
    cin >> marks >>  option;
    double amount;
    cout << "Enter amount you want to deposit"<< endl;
    cin >> amount;

    s.submit_fees(amount);
    s.update_marks(marks, option);

    
      
    return 0;
}