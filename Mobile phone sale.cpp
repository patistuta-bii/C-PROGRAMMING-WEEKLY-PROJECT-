#include <iostream>
using namespace std;

int main() {
    string customerName;
    string phoneModel;
    int quantity;
    float  pricePerPhone;
    float  totalSales;

    cout << "Enter customer name: ";
    cin >> customerName;

    cout << "Enter phone model: ";
    cin >> phoneModel;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter price per phone: ";
    cin >> pricePerPhone;

    totalSales = quantity * pricePerPhone;

    cout << "\n======== SALES RECEIPT ========" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Phone Model: " << phoneModel << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price per Phone: " << pricePerPhone << endl;
    cout << "Total Sales: " << totalSales << endl;

    return 0;
}