#include <iostream>
#include <cctype>

using namespace std;

int main() {
    cout << "Enter text for analysis : ";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch)) {
            chars++;
        }
        else if (isspace(ch)) {
            whitespace++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (ispunct(ch)) {
            punct++;
        }
        else {
            others++;
        }
        cin.get(ch);
    }

    cout << "Whitespace: " << whitespace << endl;
    cout << "Digits: " << digits << endl;
    cout << "Chars: " << whitespace << endl;
    cout << "Punct: " << whitespace << endl;
    cout << "Others: " << whitespace << endl;
}