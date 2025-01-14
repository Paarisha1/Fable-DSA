#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

void findRepeatedWords(const string& text) {
    unordered_map<string, int> wordCount;
    stringstream ss(text);
    string word;

    while (ss >> word) {
        wordCount[word]++;
    }

    cout << "Words stored in the dictionary: ";
    for (const auto& pair : wordCount) {
        if (pair.second > 1) {
            cout << pair.first << " ";
        }
    }
    cout << endl;
}

int main() {
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    findRepeatedWords(text);

    return 0;
}
