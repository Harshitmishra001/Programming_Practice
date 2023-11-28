#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string x1= to_string(x);
        string revword= x1;
        reverse(revword.begin(), revword.end());
        if (x1 == revword) {
            return true;
        } else {
            return false;
        }
        }
};
int main() {
    Solution a;
    int word;
    cout << "Enter to check for Palindrome:";
    cin >> word;
    cout<<a.isPalindrome(word);
    return 0;
}