#include <iostream>
using namespace std;

enum colors
{
    red,
    yellow,
    blue,
    green
};

int main()
{
    colors c = colors::blue;
    c = red;
    cout << c << endl;
}