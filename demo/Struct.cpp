#include <iostream>
using namespace std;

struct person
{
    short age;
    string name;
};

struct message
{
    unsigned int status : 4;
    unsigned int : 4; // 预留
    int value : 4;
};

union one4all
{
    int int_val;
    long long_val;
    double double_val;
    char char_val;
};

int main()
{
    person p1 = {
        18,
        "John",
    };
    cout << p1.age << " " << p1.name << endl;

    struct student
    {
        string name;
        string hobbiy;
    } student = {
        "Zhang",
        "Computer"};
    cout << student.name << " " << student.hobbiy << endl;

    message m1 = {1, 6};
    cout << m1.status << " " << m1.value << endl;

    one4all val = {65};
    cout << val.int_val << endl;
    cout << val.long_val << endl;
    cout << val.double_val << endl;
    cout << val.char_val << endl;
}