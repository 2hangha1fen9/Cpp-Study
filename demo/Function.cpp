#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

//函数定义
void sayHello(string);

int main(){
    sayHello("Zhangsan");
}

//函数声明
void sayHello(string name){
    cout << "Your name is " << name << endl;
}