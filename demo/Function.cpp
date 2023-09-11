#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

//函数定义
void sayHello(string);
void setValue(int*);
void initArray(int[], int);

int main() {
    int arr[10];
    cout << sizeof(arr) << endl; // 40
    initArray(arr, 10);
    for (int n : arr) {
        cout << n << endl;
    }
}

//函数声明
void sayHello(string name) {
    cout << "Your name is " << name << endl;
}

void setValue(int* value) {
    *value = 666;
}

//数组作为参数会变成指针
//void initArray(int* array, int count) {
void initArray(int array[], int count) {
    // cout << sizeof(array) << endl; No
    cout << array << endl;

    for (int i = 0;i < count;i++) {
        array[i] = 1;
    }
}