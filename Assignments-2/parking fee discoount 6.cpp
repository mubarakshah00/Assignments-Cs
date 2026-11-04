#include <iostream>
using namespace std;

int main() {
    int h;
    int stdid;

    cout << "Enter parking hours: ";
    cin >> h;
    cout << "Do you have a valid student ID? (1 for yes, 0 for no): ";
    cin >> stdid;

    if (stdid == 1 && h >= 2) {
        cout << "Student Parking Discount Applicable";
    }

    return 0;
}
