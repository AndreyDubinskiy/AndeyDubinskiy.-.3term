#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
#include <cctype>
#include <algorithm> 
using namespace std;

int sumFromString(const string& input) {
    if (input.empty() || input.front() != '[' || input.back() != ']') {
        throw invalid_argument("Incorrect");
    }
    string numberString = input.substr(1, input.size() - 2);

    stringstream ss(numberString);
    string token;
    int totalSum = 0; 
    while (getline(ss, token, ',')) {
        token.erase(remove_if(token.begin(), token.end(), ::isspace), token.end());
        for (char c : token) {
            if (!isdigit(c) && c != '-') {
                throw invalid_argument("Incorrect");
            }
        }
        if (!token.empty()) {
            totalSum += stoi(token); 
        }
    }

    return totalSum;
}

int main() {
    string testInputs[] = {
        "[10, 20, 30, 40, 50]",
        "[4, 8, 15, 16, 23, 42]",
        "[20]",
        "[]",
        "[invalid, text]"
    };

    for (const string& testInput : testInputs) {
        try {
            int result = sumFromString(testInput);
            cout << testInput << " = " << result << endl;
        } catch (const invalid_argument& e) {
            cout <<  e.what() << testInput << endl;
        }
    }

    return 0;
}