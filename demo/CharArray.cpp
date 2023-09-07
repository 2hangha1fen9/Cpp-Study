#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char hello1[] = {'h', 'e', 'l', 'l', 'o', '1'};       // 不是一个字符串
    char hello2[] = {'h', 'e', 'l', 'l', 'o', '2', '\0'}; // 是一个字符串
    char hello3[] = "Hello3";
    char hello4[23] = "Hello4";
    char hello5[] = "Hello"
                    "World";
    cout << hello1 << " Size: " << sizeof(hello1) << " Length: " << strlen(hello1) << endl;
    cout << hello2 << " Size: " << sizeof(hello2) << " Length: " << strlen(hello2) << endl;
    cout << hello3 << " Size: " << sizeof(hello3) << " Length: " << strlen(hello3) << endl;
    cout << hello4 << " Size: " << sizeof(hello4) << " Length: " << strlen(hello4) << endl;
    cout << hello5 << " Size: " << sizeof(hello5) << " Length: " << strlen(hello5) << endl;

    char messag2[19];
    cout << "Please enter your city2 :";
    cin.getline(messag2, 19);
    cout << messag2 << " Length: " << strlen(messag2) << endl;

    char firstName[10];
    char lastName[10];
    cin.get();
    cout << "Please enter your firstName :";
    cin.get(firstName, 10);
    cin.get();
    cout << "Please enter your lastName :";
    cin.get(lastName, 10);

    cout << "Your Name is " << firstName << " " << lastName << endl;

    // 遇到空格回车会截止
    // char message1[19];
    // cout << "Please enter your city1 :";
    // cin >> message1;
    // cout << message1 << " Length: " << strlen(message1) << endl;
}