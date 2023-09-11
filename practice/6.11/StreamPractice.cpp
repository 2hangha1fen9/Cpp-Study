#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void demo2();


int main() {
    demo2();
}

void demo1() {
    string line;
    cout << "Please input: ";
    char c;
    while (cin.get(c)) {
        if (c == '@') {
            break;
        }
        else {
            if (isalpha(c) && islower(c)) {
                line += toupper(c);
            }
            else if (isalpha(c) && !islower(c)) {
                line += tolower(c);
            }
        }
    }

    cout << line << endl;
}

void demo2() {
    int donation[10];
    double sum = 0;
    int count = 0;
    double avg = 0;
    for (int i = 0; i < 10; i++) {
        cin >> donation[i];
        count++;
        sum += donation[i];
    }

    cout << count << endl;
    avg = sum / count;
    int greatThanCount = 0;
    for (int i = 0;i < count;i++) {
        if (donation[i] > avg) {
            greatThanCount++;
        }
    }

    cout << "Average: " << avg << endl;
    cout << "Sum: " << sum << endl;
    cout << "Count of values greater than the average: " << greatThanCount << endl;
}

void demo4() {

}