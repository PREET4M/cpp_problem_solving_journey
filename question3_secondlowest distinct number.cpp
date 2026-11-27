/*
Question — Second smallest distinct number
Take six integers from the user and find the second smallest distinct number.

If no second smallest distinct number exists, print Not possible.
Examples
Input	                                        Expected output
10 20 30 40 50 60	                                20
60 50 40 30 20 10	                                20
10 10 20 30 40 50	                                20
5 5 5 5 5 8	                                        8
7 7 7 7 7 7	                                    Not possible
-10 -50 -30 -20 -40 -60	                           -50
0 -5 10 -5 20 0	                                    0
10000 -10000 10000 -10000 10000 -10000	            10000

Constraints
- Input range: −10,000 to 10,000.
- No arrays, sorting or built-in min() and max().
- Use one loop.
- Handle duplicates and negative numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int smallest = 10001;
    int second_smallest = 10001;
    int num;

    cout<<"Enter 6 integers : "<<endl;
    for (int i = 0; i < 6; i++)
    {
        cin>>num;
        if (num < smallest)
        {
            second_smallest = smallest;
            smallest = num;
        }
        else if (num > smallest && num < second_smallest)
        {
            second_smallest = num;
        } 
    }

    if (second_smallest == 10001)
    {
        cout<<"Not possible..."<<endl;
    }
    else
    {
        cout<<"Second Smallest = "<<second_smallest;
    }
    
    
    return 0;
}