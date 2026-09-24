#include <iostream>
using namespace std;

int main() {
    string studentName;
    int age;
    float  examScore;

    cout << "Enter student name: ";
    cin >> studentName;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> examScore;

    cout << "\n=======ADMISSION RESULT======" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Age: " << age << endl;
    cout << "Exam Score: " << examScore << endl;

    if (age >= 18) {
        if (examScore >= 50) {
            cout << "Decision: Admitted" << endl;
        } else {
            cout << "Decision: Not Admitted: Low Score" << endl;
        }
    } else {
        cout << "Decision: Not Admitted: Underage" << endl;
    }

    return 0;
}