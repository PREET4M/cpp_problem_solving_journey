/*
Question 2 — Second largest distinct number
Given four integers a, b, c and d, find and print the second largest distinct number.

If no second largest distinct number exists, print "Not possible".
Examples
Input	                        Expected output
10 20 30 40	                         30
40 10 30 20	                         30
40 40 30 20	                         30
10 10 20 20	                         10
5 5 5 5	                          Not possible
-10 -20 -30 -40	                    -20
0 -5 0 -10	                        -5
8 8 8 2	                             2

Constraints
- Integers range from −10,000 to 10,000.
- No arrays.
- No sorting.
- No built-in min() or max() functions.
- Loops and functions are allowed.
- Handle all possible arrangements and duplicates.
*/

#include <iostream>
using namespace std;

int main() {
    cout<<"give 4 integers : "<<endl;
    int a, b, c, d, second_highest, highest;
    cin>>a>>b>>c>>d;

    if (a >b && a>c && a>d)
    {
        highest = a;
        if (b > c && b > d)
        {
            second_highest = b;
        }
        else if (c > d)
        {
            second_highest = c;
        }
        else
        {
            second_highest = d;
        }
    }

    else if (b > a && b > c && b > d)
    {
        highest = b;
        if (a > )
        {
            /* code */
        }
        
    }
    
    
    return 0;
}