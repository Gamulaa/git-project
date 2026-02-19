#include <iostream>
using namespace std;
long cube(long num)
{
    long x_cubed = num * num * num;
    return x_cubed;
   
}
long square(long num)
{
    long x_squared = num * num;
    return x_squared;
}
int main()
{
    long number;
    cout << "Enter a number: ";
    cin >> number;
    long result = cube(number);
    cout << "The cube of " << number << " is " << result << endl;
    result = square(number);
    cout << "The square of " << number << " is " << result << endl;
    return 0;
}