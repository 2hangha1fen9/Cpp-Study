#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void write();
void read();
int main() {
    //write();
    read();
}

void write() {
    string name;
    int age;
    int tall;

    cout << "请输入姓名: ";
    cin >> name;
    cout << "请输入年龄: ";
    cin >> age;
    cout << "请输入身高: ";
    cin >> tall;

    //写入到文件流
    ofstream file("./info.text");
    // file.open("./info.text");
    file << "Name: " << name << endl;
    file << "Aage: " << age << endl;
    file << "Tall: " << tall << endl;
    file.close();
}

void read() {
    ifstream file("./info.text");
    if (!file.is_open()) {
        exit(EXIT_FAILURE);
    }

    string temp;
    while (file.good()) {
        getline(file, temp);
        // file >> temp;
        cout << temp << endl;
    }
    file.close();
}