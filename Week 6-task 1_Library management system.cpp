
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copies;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author name: ";
        cin >> author;

        cout << "Enter available copies: ";
        cin >> copies;
    }

    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "\nBook borrowed successfully!" << endl;
        }
        else {
            cout << "\nNo copies available!" << endl;
        }
    }

    void displayDetails() {
        cout << "\n--- BOOK DETAILS ---" << endl;
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << copies << endl;
    }
};

int main() {
    Book book1;

    book1.inputDetails();
    book1.borrowBook();
    book1.displayDetails();

    return 0;
}
