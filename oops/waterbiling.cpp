#include <iostream>
using namespace std;

class WaterUsage {
    int gallons;
    double billAmount;

public:
    WaterUsage() {}

    void setGallons(int g) {
        gallons = g;
    }

    void calculateBill() {
        if (gallons >= 0 && gallons < 500) {
            billAmount = gallons * 1.0;
        } else if (gallons < 1000) {
            billAmount = 500 * 1.0 + (gallons - 500) * 1.5;
        } else {
            billAmount = (500 * 1.0) + (500 * 1.5) + (gallons - 1000) * 2.0;
        }
    }

    void displayBill() {
        cout << "Total bill amount: Rs " << billAmount << endl;
    }
};

int main() {
    WaterUsage customer;

    int gallons;
    cout << "Enter the number of gallons used: ";
    cin >> gallons;

    customer.setGallons(gallons);
    customer.calculateBill();

    customer.displayBill();

    return 0;
}
