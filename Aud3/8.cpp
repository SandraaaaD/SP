#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Vnesi 2 broja: " << endl;
    cin >> a >> b;
    if (a > b)
        cout << "Maximum: \n" << a;
    else
        cout << "Maximum: \n" << b;
    return 0;
}
