#include <iostream> 
// 引入名称控件
using namespace std;
// 引入具体成员
using std::cout;
using std::endl;

int main(){
    cout << "Hello, World!" << endl; // 使用换行符
    cout << "Hello, C++ \n"; //使用\n换行
    cout << "What is your name?" << endl;
    string name;
    cin >> name; // 从控制台输入
    cout << "Your name is " << name << endl;
    return 0;
}