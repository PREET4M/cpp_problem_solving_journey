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
    int num;
    int highest = -10001;
    int second_highest = -10001;
    cout<<"enter 4 integers : "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cin>>num;
        if (num > highest)
        {
            second_highest = highest;
            highest = num;
        }
        else if (num > second_highest && num < highest)
        {
            second_highest = num;
        }
        
    }
    if (second_highest == -10001)
    {
        cout<<"Not Possible"<<endl;
    }
    else
    {
        cout<<"Second Highest = "<<second_highest;
    }
    
    
    return 0;
}