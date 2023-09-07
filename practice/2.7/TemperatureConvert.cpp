#include <iostream>
using namespace std;

int main()
{
    float temperature;
    cout << "Please enter a Celsius value: ";
    cin >> temperature;
    cout << temperature << " degress Celsius is " << 1.8 * temperature + 32.0 << " degress Fahrenheit." << endl;
}