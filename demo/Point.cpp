#include <iostream>
#include <cstring>
using namespace std;

void demo1();
void demo2();
void demo3();
void demo4();
void demo5();
char* getName();

int main() {
    //demo1();
    //demo2();
    //demo3();
    //demo4();
    //demo5();

    char* name = new char[10];
    cout << name << endl;
    delete[] name;
}

void demo1() {
    string name = "Apple";
    string tag = "Yellow";
    int price = 23023;

    string* name_ptr = &name;
    string* tag_ptr = &tag;
    int* price_ptr = &price;
    tag_ptr = (string*)0x61fdd0;
    cout << *name_ptr << ":" << name_ptr << ":" << sizeof(name_ptr) << endl;
    cout << *tag_ptr << ":" << tag_ptr << ":" << sizeof(tag_ptr) << endl;
    cout << *price_ptr << ":" << price_ptr << ":" << sizeof(name_ptr) << endl;
}

void demo2() {
    //使用new在堆上分配int字节大小的内存
    int* value1 = new int;
    *value1 = 666;
    cout << *value1 << endl;
    cout << value1 << endl;
    delete value1; //释放分配的空间
    cout << *value1 << endl; //会获取失败
    cout << value1 << endl;

    int value2 = 23;
    int* value2_p = &value2;
    //delete value2_p; //delete只能释放new分配的内存
    cout << value2 << endl;
}

void demo3() {
    int* array_p = new int[20];
    int* first_p = array_p;
    cout << sizeof(array_p) << endl;
    cout << sizeof(*first_p) << endl;

    for (int i = 0; i < 4;i++) {
        // *first_p = i + 1;
        // first_p++;
        array_p[i] = i + 1;
        //两种方式都可以
    }
    first_p = array_p;
    for (int i = 0; i < 4;i++) {
        // cout << *first_p << endl;
        // first_p++;
        cout << array_p[i] << endl;
        //两种方式都可以
    }

    delete[]array_p;
}

void demo4() {
    struct goods {
        string name;
        int price;
    };

    goods orange = {
        "orange",
        23
    };
    cout << orange.name << endl;
    cout << orange.price << endl;


    goods* apple = new goods;
    apple->name = "Apple"; // 自己分配的结构体需要用 -> 访问成员 因为分配返回的是一个指针不是一个类型
    apple->price = 23;

    cout << apple->name << endl;
    cout << apple->price << endl;
    delete apple;
}

void demo5() {
    char* name;

    name = getName();
    cout << name << " at " << (int*)name << endl;
    delete name;
}

char* getName() {
    char temp[80];
    cout << "Please enter your name: ";
    cin >> temp;
    char* pt = new char[strlen(temp) + 1];
    strcpy(pt, temp);
    return pt;
}