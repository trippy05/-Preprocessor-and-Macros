#include <iostream>
using namespace std;
#define MODE 1
#ifndef MODE
#error Important macro required
#endif
double add(double a, double b){
  return a+b;
}
int main() {
double a, b, sum;
#if MODE == 1
cout << "Working in combat!" << endl;
cout << "Enter num1: "<< endl;
cin >> a;
cout << "Enter num2: "<< endl;
cin >> b;
sum = add(a, b);
cout << "Sum: " << sum << endl;
#elif MODE == 0
cout << "Working in training mode"<< endl;
#else
cout << "Unknown mode. Completion of work" << endl;
#endif
}