#include <iostream>
using namespace std;

int x = 100;   // global variable

void show() {
    cout << x << endl;
}

int main() {
    cout << x << endl;
    show();
}