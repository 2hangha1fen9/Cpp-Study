#include <iostream>
using namespace std;

struct person
{
    short age;
    string name;
};

int main()
{
    person p1 = {
        18,
        "John",
    };
    cout << p1.age << " " << p1.name << endl;
}