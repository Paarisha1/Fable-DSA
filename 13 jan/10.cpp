#include <iostream>
#include <string>
using namespace std;

string decryptCode(const string& code) {
    string decrypted = code;

    for (size_t i = 0; i < decrypted.length() - 1; i += 2) {
        swap(decrypted[i], decrypted[i + 1]);
    }

    return decrypted;
}

int main() {
    string code;
    cout << "Enter the code: ";
    cin >> code;

    string decryptedCode = decryptCode(code);
    cout << "Decrypted code: " << decryptedCode << endl;

    return 0;
}