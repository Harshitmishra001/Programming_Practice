#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string word;
    cout << "Enter to check for Palindrome:";
    cin >> word;
    string revword = word;
    reverse(revword.begin(), revword.end());
    if (word == revword) {
        cout << "Palindrome.\n";
    } else {
        cout << "Not palindrome.\n";
    }
    return 0;
}