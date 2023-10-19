#include <iostream>
using namespace std;
bool Palindromecheck(string str,int non)
{ 
    non=0;
    int len=str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter to check for Palindrome: ";
    cin >> str;
    int n = str.length();
    bool PalinTrue = Palindromecheck(str,n);
    if(PalinTrue==true)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}