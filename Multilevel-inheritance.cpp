#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    void readPersonDetails(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    
    void displayPersonDetails(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person{
    public:
     int employeeId;
     string position;

     void readEmployeeDetails(){
        readPersonDetails();
        cout << "Enter employee ID: ";
        cin >> employeeId;
        cout << "Enter position: ";
        cin >> position;
     }

     void displayEmployesDetails(){
        displayPersonDetails();
        cout << "Employee ID: " << employeeId << endl;
        cout << "Position: " << position << endl;
     }
};

class Manager : public Employee{
    public:
     string timeSize;

     void readManagerDetails(){
        readEmployeeDetails();
        cout << "Enter time size: ";
        cin >> timeSize;
     }

     void displayManagerDetails(){
        displayEmployesDetails();
        cout << "Time Size: " << timeSize << endl;
     }

};

int main(){
    Manager manager;

    cout << "Enter Manager Details:" << endl;

    manager.readManagerDetails();
    cout<<"manger Details" << endl;
    manager.displayManagerDetails();
    
}