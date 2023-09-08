#include <iostream>
#include <array>
#include <cstring>
using namespace std;

void demo11();

int main() {
    demo11();
}

void demo1() {
    char actor[30];
    short betsie(100);
    float chuck[13];
    long double dipsea[64];
}

void demo2() {
    array<char, 30> actors;
}

void demo3() {
    int values[] = { 1,3,5,7,9 };
}

void demo4() {
    int values[] = { 1,3,5,7,9 };
    int even;
    even = values[0];
    cout << even << endl; // 1
    even = *(values + 4);
    cout << even << endl; // 9
}

void demo5() {
    float values[] = { 1.2,0.3,9.6,2,5 };
    cout << *(values + 1) << endl; //0.3
}

void demo6() {
    char food[] = "cheeseburger";
    cout << sizeof(food) << endl; //13 
}

void demo7() {
    string text = "WaldorfSalad";
    cout << text << endl; // WaldorfSalad
    cout << sizeof(text) << endl; //32  因为这个返回的是一个指针
}

void demo8() {
    struct Fish {
        string variety;
        unsigned int weight;
        float length;
    };
}

void demo9() {
    struct Fish {
        string variety;
        unsigned int weight;
        float length;
    };

    Fish f = {
        "鲨鱼",
        23,
        12.5
    };
}

void demo10() {
    enum Response {
        Yes = 1,
        No = 0,
        Maybe = 2
    };
}

void demo11() {
    double ted = 23.6;
    double* ted_p = &ted;
    cout << *ted_p << endl;
}

