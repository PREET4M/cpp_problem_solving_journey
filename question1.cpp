/*
Question 1 — Find the middle number
Given three integers a, b and c, print the middle number — the number that would appear in the middle if the three integers were arranged in ascending order.

The integers are not necessarily distinct.
Examples : 
Input	                         Expected output
10 30 20	                            20
7 2 9	                                 7
-5 -10 -2	                            -5
4 4 8	                                 4
9 9 9	                                 9
0 -5 10	                                 0

Constraints
- Integers range from −10,000 to 10,000.
- Do not use arrays.
- Do not use sorting or built-in min() and max() functions.
- Use only the C++ concepts you already know.
- Handle every possible arrangement, including duplicate and negative numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, mid;
    cout<<"Enter 3 numbers : "<<endl;
    cin>>num1>>num2>>num3;
    
    if (num1>num2 && num1>num3)
    {
        /* code */
    }
    
    return 0;
}