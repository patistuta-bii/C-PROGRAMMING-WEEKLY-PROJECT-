#include <iostream>
using namespace std;

int main() {
    string studentName;
    float theoryMarks;
    float practicalMarks;
    float averageScore;

    cout << "Enter student name: ";
    cin >> studentName;

    cout << "Enter theory marks: ";
    cin >> theoryMarks;

    cout << "Enter practical marks: ";
    cin >> practicalMarks;

    averageScore = (theoryMarks + practicalMarks) / 2;

    cout << "\n======DRIVING TEST RESULT =======" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Theory Marks: " << theoryMarks << endl;
    cout << "Practical Marks: " << practicalMarks << endl;
    cout << "Average Score: " << averageScore << endl;

    if (averageScore >= 50) {
        cout << "Result: PASS" << endl;
    } else {
        cout << "Result: FAIL" << endl;
    }

    return 0;
}