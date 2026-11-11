
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter admission number: ";
        cin >> admissionNumber;

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    void makePayment() {
        double payment;

        cout << "\nEnter payment amount: ";
        cin >> payment;

        if (payment > 0 && payment <= feeBalance) {
            feeBalance = feeBalance - payment;
            cout << "Payment successful!" << endl;
        }
        else {
            cout << "Invalid payment amount!" << endl;
        }
    }

    void displayStatus() {
        cout << "\n--- STUDENT FEE DETAILS ---" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: Ksh " << feeBalance << endl;
    }
};

int main() {
    Student student1;

    student1.inputStudent();
    student1.makePayment();
    student1.displayStatus();

    return 0;
}
