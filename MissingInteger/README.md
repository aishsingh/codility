Missing Integer
===============
Find the smallest positive integer that does not occur in a given sequence.

Score
------
* Task score 100% 
    * Correctness 100% 
    * Performance 100%
* Passes all unit tests

Solution
--------

```cpp

#include <algorithm>

using namespace std;

int solution(vector<int> &A) 
{
    sort(A.begin(), A.end());

    // Smallest int which doesnt exist
    int smallest = 1;

    for (int i=0; i<A.size(); i++)
    { 
        if (A[i] == smallest)
        {
            // this int exists
            smallest++;
        }
    }
    return smallest;
}

```

Link
----
https://app.codility.com/programmers/lessons/4-counting_elements/missing_integer/
