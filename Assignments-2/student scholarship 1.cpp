#include <iostream>
using namespace std;

int main() {
    int marks;
    float attendance;

    cout << "Enter student's marks: ";
    cin >> marks;
    cout << "Enter attendance percentage: ";
    cin >> attendance;

    if (marks >= 85 && attendance >= 90) {
        cout << "Eligible for Scholarship";
    }

    return 0;
}
