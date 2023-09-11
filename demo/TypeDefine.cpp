#include <iostream>
using namespace std;
typedef int* int_ptr; //定义类型别名


int main() {
    int_ptr p = new int;
    *p = 999;
    cout << *p << endl;
}