#include <iostream>
using namespace std;
void thisFunc(int);
int m2;
int main(){
  int m1;
  m1=2; m2=5;
  thisFunc(m1);
  cout << m1 << " " << m2 << endl;
  return 0;
}
void thisFunc(int a){
  int m2;
  m2=a+9; a++;
  cout << a << " " <<m2;
}
