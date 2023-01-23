//Working of Implicit type-conversion

#include <iostream>
using namespace std;

int main() {

   int num_int;
   double num_double = 9.99;

   // implicit conversion
   // assigning a double value to an int variable
   num_int = num_double;

   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;





    // initializing a double variable
    double num2_double = 3.56;
    cout << "num_double = " << num2_double << endl;

    // C-style conversion from double to int
    int num_int1 = (int)num_double;
    cout << "num_int1   = " << num_int1 << endl;

    // function-style conversion from double to int
    int num_int2 = int(num_double);
    cout << "num_int2   = " << num_int2 << endl;




    float f = 3.5;
  
    // using cast operator
    int b = static_cast<int>(f);
  
    cout << "Value after type casting : " << b;

    return 0;
}