#include <iostream>
#include <climits>
#define PI 3.14
using namespace std;

int main()
{
    int a = 1;
    int b = {2};
    int c{3};
    int d(4);
    cout << a << " " << b << " " << c << " " << d << endl;
    cout << PI << endl;

    cout << int('A') << endl;
    cout << (int)'A' << endl;
    cout << static_cast<int>('A') << endl;

    auto e = 1;
    auto f = 1.0;
    auto g = 2323L;

    cout << sizeof(e) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(g) << endl;
}