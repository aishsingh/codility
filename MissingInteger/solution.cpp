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
