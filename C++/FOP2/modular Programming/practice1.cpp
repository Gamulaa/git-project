#include <iostream>
using namespace std;
int sqrr(int num){
    int x_squared = num * num;
    return x_squared;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result = sqrr(number);
    cout << "The square of " << number << " is " << result << endl;
    return 0;
}