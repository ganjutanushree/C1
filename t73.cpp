#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int age; 
    string name;
    int regNo;
    int semester;
    int rollNo;
    float attendance;
    int marks[5];

public:
    void getDetails() {
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Registration Number: ";
        cin >> regNo;
        cin.ignore();
        cout<<"Enter Name:";
        getline(cin,name);
        cout << "Enter Semester: ";
        cin >> semester;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Attendance Percentage: ";
        cin >> attendance;
        cout << "Enter 5 Marks: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }
    void showDetails() {
        cout << "\nStudent Details:\n";
        cout << "Age: " << age << "\n";
        cout << "Registration Number: " << regNo << "\n";
        cout<<"Name:"<<name<<"\n";
        cout << "Semester: " << semester << "\n";
        cout << "Roll Number: " << rollNo << "\n";
        cout << "Attendance: " << attendance << "%\n";
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << "\n";
    }
    void showName() { 
        cout << "Name: " << name << "\n"; 
    }
    void showRollNo()  { 
        cout << "Roll Number: " << rollNo << "\n"; 
    }
    void showAttendance() { 
        cout << "Attendance: " << attendance << "%\n"; 
    }

    void printAttendance() {
        cout << "Roll No: " << rollNo << ", Name :" << name << ", Attendance: " << attendance << "%\n";
    }

    
    void showShortage()  {
        if (attendance < 75) {
            cout << "Attendance is below 75%. Needs Improvement.\n";
        } else {
            cout << "Attendance is satisfactory.\n";
        }
    }
    void show90() {
    int totalmarks=0;
    for(int i=0;i<5;i++)
    {
        totalmarks += marks[i];
    }
    float percentage=(totalmarks/5);
    if(percentage>=90){
            cout << "Student with Roll No " << rollNo << " has marks percentage >= 90%.\n";
        }
    }

    void showPercentage() {
       

int totalmarks=0;
    for(int i=0;i<5;i++)
    {
        totalmarks += marks[i];
    }
    float percentage=(totalmarks/5);
    cout<<"marks percentage:"<<percentage<<"%\n";
    }
};
int main() {
    Student student;

    student.getDetails();
    student.showDetails();
    student.showName();
    student.showRollNo();
    student.showAttendance();
    student.printAttendance();
    student.showShortage();
    student.show90();
    student.showPercentage();

    return 0;
}