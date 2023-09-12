#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void demo3();

//左/右值引用
int main() {
    demo3();
}

//移动语义,使用 move 将 source 转换为右值引用，并将其数据移动到 target 中。这避免了不必要的数据复制，提高了性能。
void demo1() {
    vector<int> source = { 1, 2, 3, 4, 5 };

    // 使用 move 将 source 转换为右值引用，并将数据移动到 target
    vector<int> target = move(source);

    cout << "Source size: " << source.size() << endl; // 输出 0
    cout << "Target size: " << target.size() << endl; // 输出 5
}

//完美转发,forwardValue 函数使用右值引用 T&& 来实现完美转发，根据传递的参数类型（左值还是右值）调用相应的函数
// 函数接受一个整数参数
void printInt(int x) {
    cout << "Integer: " << x << endl;
}

// 函数接受一个字符串参数
void printString(const string& str) {
    cout << "String: " << str << endl;
}

template <typename Func, typename... Args>
void callFunc(Func&& func, Args&&... args) {
    cout << "Calling function..." << endl;
    func(forward<Args>(args)...); // 使用 forward 来转发参数
}
void demo2() {
    int intValue = 42;
    string strValue = "Hello, World!";

    // 使用完美转发调用两个不同类型的函数
    callFunc(printInt, intValue);
    callFunc(printString, strValue);
}

//可变右值引用,rvalue_ref 是一个可变右值引用，它允许修改 x 的值，即使 x 最初是一个左值。
void demo3() {
    int x = 42;
    int&& rvalue_ref = move(x); // 使用 move 将左值转换为右值引用
    rvalue_ref = 100; // 修改 x 的值
    cout << x << endl; // 输出结果为100
}