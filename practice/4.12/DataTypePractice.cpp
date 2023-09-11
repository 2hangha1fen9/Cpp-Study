#include <iostream>
#include <array>
#include <cstring>
#include <vector>
using namespace std;

void demo15();

int main() {
    demo15();
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

void demo12() {
    float treacle[] = { 1,3,5,7,9,2,4,6,8,10 };
    float* p = treacle;
    cout << *p << endl;
    p += 9;
    cout << *p << endl;
}

void demo13() {
    int size;
    cin >> size;
    int* array = new int[size];
    cout << array << endl;
    delete[] array;

    cin >> size;
    vector<int> vec(size);
    cout << vec.size() << endl;
}

void demo14() {
    cout << (int*)"Home of the jolly bytes"; // 0x405001
    cout << (string*)"Home of the jolly bytes"; // 0x405001
    cout << (char*)"Home of the jolly bytes"; // Home of the jolly bytes
}

void demo15() {
    struct Fish {
        string variety;
        unsigned int weight;
        float length;
    };

    Fish* fish = new Fish;
    fish->variety = "鲸鱼";
    fish->weight = 24;
    fish->length = 100;

    cout << fish->variety << endl;
    cout << fish->weight << endl;
    cout << fish->length << endl;

    delete fish;
}