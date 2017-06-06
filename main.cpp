#include <iostream>

using namespace std;

int main()
{
    double cel, fahr;
    cout << "Temperatura in grade Fahrenheit: ";
    cin >> fahr;
    cel = (fahr - 32) * 5./9;
    cout << "Temperatura in grade Celsius este de " << cel << endl;
    return 0;
}
