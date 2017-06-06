#include <iostream>

using namespace std;

int main()
{
    int v, h ;
    double G;
    cout << "Varsta (ani) : ";
    cin >> v;
    cout << "Inaltimea (cm) :";
    cin >> h;
     G = 50 + 0.75*(h - 150) + 0.25 * (v - 20);
    cout << "Greutatea ideala (barbat) : " << G << "kg" << endl;
    cout << "Greutatea ideala (femeie) : " << 0.9 * G << "kg" << endl;
    return 0;
}
