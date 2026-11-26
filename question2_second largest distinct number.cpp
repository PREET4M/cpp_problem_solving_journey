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
    cout<<"Enter 4 numbers : "<<endl;
    int a, b, c, d, second_highest;
    cin>>a>>b>>c>>d;

    if (a > b && a > c && a > d)
    {
        if (b > c && b > d)
        {
            second_highest = b;
        }
        else if (c > b && c > d)
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
        if (a > c && a > d)
        {
            second_highest = a;
        }
        else if (c > a && c > d)
        {
            second_highest = c;
        }
        else
        {
            second_highest = d;
        }    
    }

    else if (c > a && c > b && c > d)
    {
        if (a > b && a > d)
        {
            second_highest = a;
        }
        else if (b > a && b > d)
        {
            second_highest = b;
        }
        else
        {
            second_highest = d;
        } 
    }

    else
    {
        if (a > b && a > c)
        {
            second_highest = a;
        }
        else if (b > a && b > c)
        {
            second_highest = b;
        }
        else
        {
            second_highest = c;
        }  
    }
    
    cout<<"Second Highes Number = "<<second_highest;
    
    return 0;
}