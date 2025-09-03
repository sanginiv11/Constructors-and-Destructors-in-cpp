#include<iostream>
using namespace std;

class student {
    int rollno;
    char name[50];
    double fee;

public:
    student();
    void display();
};

student::student() {
    cout << "Enter the rollno: ";
    cin >> rollno;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the Fee: ";
    cin >> fee;
}

void student::display() {
    cout << "Roll No: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Fee: " << fee << endl;
}

int main() {
    student s1;
    s1.display();
    return 0;
}
// Output
// Enter the rollno: 93
// Enter the name: Sangini
// Enter the Fee: 400000
// Roll No: 93
// Name: Sangini
// Fee: 400000
