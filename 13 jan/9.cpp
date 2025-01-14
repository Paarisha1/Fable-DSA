// Code for Question 9
#include <iostream>
#include <string>
using namespace std;

int countDebitAfterCredit(const string& transactions) {
    string vowels = "aeiouAEIOU";
    int count = 0;

    for (size_t i = 0; i < transactions.length() - 1; ++i) {
        if (vowels.find(transactions[i]) != string::npos && vowels.find(transactions[i + 1]) == string::npos) {
            count++;
        }
    }

    return count;
}

int main() {
    string transactions;
    cout << "Enter transaction IDs: ";
    cin >> transactions;

    int result = countDebitAfterCredit(transactions);
    cout << "Debit transactions after credit: " << result << endl;

    return 0;
}