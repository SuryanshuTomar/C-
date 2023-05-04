#include <iostream>
using namespace std;

// Function Prototype -> To tell the compiler that this function actual body
// will be available later and do not break the flow of the compilation. Syntax
// -> type function_name(parameters)
// int sum(int, int);
// this is also acceptable to just mention the types of the formal parameter
int sum(int a, int b);

int main() {
  cout << "The sum is : " << sum(3, 4) << endl;

  return 0;
}

// Actual Function Declaration / Body
int sum(int a, int b) { return a + b; }
