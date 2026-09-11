#include <iostream>
using namespace std;

class Shivam{
    string name;
    string standard;
    int marks;
    string message;
    double fees;
    public:
    Shivam(string name, string standard, int marks, string message, double fees){
        cout<< "Enter name: " ; cin >> this->name;
        cout << "Enter class: "; cin >> this->standard;
        cout << "Enter marks: "; cin >> this->marks;
        cout << "Enter message: "; getline(cin,this->message);
        cout << "Enter fees: "; cin >> this->fees;
    }
    void submit_fees(double amount);
    void Shivam::update_marks(int mark, int option);
    ~Shivam(){
        cout << "Name of the student: "<< name<< endl;
        cout << "Current class of student: "<< standard<< endl;
        cout << "Marks secured by student: "<< marks;
        cout << "Message for student: "<< message<< endl;
        cout << "Current fees of student: "<<fees<< endl;
    }

};
void Shivam::submit_fees(double amount){
    fees -= amount;
}
void Shivam::update_marks(int mark, int option){
    cout << "Choose :"<<endl;
    cout << "1. To increase Marks"<<endl;
    cout << "2. To decrease Marks";
    if (option == 1){
        marks += mark;
    }
    else{
        marks -= mark;
    }
}

int main() {
      
    return 0;
}