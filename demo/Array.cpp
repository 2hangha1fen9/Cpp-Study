#include <iostream>
using namespace std;

int main()
{
    int nums[4] = { 1, 3, 4, 5 };
    int count[4];
    int counts[]{ 2, 3, 4, 4 };

    //使用foreach
    for (int n : nums) {
        cout << n << endl;
    }

    //修改数组元素值 使用引用类型
    for (int& n : nums) {
        n *= 10;
    }
    for (int n : nums) {
        cout << n << endl;
    }
}

