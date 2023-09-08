#include <iostream>
#include <vector>
#include <array>
using namespace std;

void demo1();
void demo2();

int main() {
    //demo1();
    demo2();
}

//动态数组
void demo1() {
    vector<int> vi1 = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < vi1.size(); i++) {
        cout << vi1[i] << endl;
    }

    vector<int> vi2(5);
    vi2 = { 6,7,8,9 };

    for (int i = 0; i < vi2.size(); i++) {
        cout << vi2[i] << endl;
    }

}

//数组模板类
void demo2() {
    array<int, 5> a1 = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < a1.size(); i++) {
        cout << a1[i] << endl;
    }

    array<int, 5> a2;
    a2[0] = 6;
    a2[1] = 7;
    a2[2] = 8;
    a2[3] = 9;
    a2[4] = 10;
    for (int i = 0; i < a2.size(); i++) {
        cout << a2[i] << endl;
    }
}