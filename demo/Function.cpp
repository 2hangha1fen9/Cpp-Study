#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <chrono>
using namespace std;
using namespace std::chrono;


//内联函数,调用时会将代码段嵌入执行处 , inline是一个编译器指令
//inline 只是一个建议，编译器可以选择忽略它。也就是说，即便函数用 inline 修饰，要不要将此函数作为内联函数，取决于编译器的判断。
inline long long pow(long long a, long long b) {
    return a * b;
}

struct Person {
    string name;
    int age;
};

//函数定义
void sayHello(string);
void setValue(int*);
void initArray(int[], int);
void getPersion(Person*);
void getTime(void (*)(Person*), Person*);


int main() {
    // Person p = { "Zhang",23 };
    // getTime(getPersion, &p);
    auto result = pow(3, 4); //函数 pow() 可能会被嵌入到main函数中，就像你直接写int result = x + y;一样。
    cout << result << endl;
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

//结构体默认按值传递
//void getPersion(Person person) {
// 引用和指针都能做到传递地址
//void getPersion(Person* person) {
void getPersion(Person* person) {
    // person.age = person.age * 10;
    // cout << "姓名: " << person.name << endl;
    // cout << "年龄: " << person.age << endl;
    person->age = person->age * 10;
    cout << "姓名: " << person->name << endl;
    cout << "年龄: " << person->age << endl;
}

//函数指针(将函数当做变量一样)
void getTime(void (*fun)(Person*), Person* person) {
    // 获取当前时间点
    auto start = high_resolution_clock::now();
    // 调用传入的函数
    fun(person); //(*fun)(person);
    // 再次获取当前时间点
    auto end = high_resolution_clock::now();
    // 计算时间差
    auto duration = duration_cast<microseconds>(end - start);
    // 输出执行时间
    cout << "Function execution time: " << duration.count() << " microseconds" << endl;
}