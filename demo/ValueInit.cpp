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
    cout << static_cast<int>('A');
}