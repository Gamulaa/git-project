#include <iostream>
using namespace std;
// Function declarations
void displayNum(int n1, float n2){
  cout << "The int number is " << n1 << endl;
  cout << "The float number is " << n2 << endl;
}
int main(){
  int num1;
  float num2;
  cout << "Enter an integer: ";
  cin >> num1;
  cout << "Enter a float: ";
  cin >> num2;
  displayNum(num1, num2);
  return 0;
}