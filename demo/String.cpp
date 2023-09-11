#include <iostream>
#include <cstring>
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

    wchar_t wchar[] = L"HelloWorld!!";
    wcout << wchar << sizeof(wchar) << endl;

    char a[] = "sdfa";
    char b[] = "aadf";
    //strcmp 0相等   1不相等
    cout << strcmp(a, b) << endl;
}