#include <iostream>
#include <string>
using namespace std;

string generateRollNumber(const string& registration) {
    string rollNumber = "";

    for (size_t i = 0; i < registration.length(); i += 2) {
        if (i + 1 < registration.length()) {
            rollNumber += max(registration[i], registration[i + 1]);
        } else {
            rollNumber += registration[i];
        }
    }

    return rollNumber;
}

int main() {
    string registration;
    cout << "Enter the registration number: ";
    cin >> registration;

    string rollNumber = generateRollNumber(registration);
    cout << "Generated roll number: " << rollNumber << endl;

    return 0;
}