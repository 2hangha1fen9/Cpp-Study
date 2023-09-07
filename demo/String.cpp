#include <iostream>
using namespace std;

int main()
{
    string hello = "hello";
    hello += "Hello";

    // 原始字符串
    string rawString = R"(Hello
    C++)";
    cout << hello << endl;
    cout << rawString << endl;
}