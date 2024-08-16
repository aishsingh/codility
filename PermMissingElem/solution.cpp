#include <numeric>

int solution(vector<int> &A) {

    int actualSum = accumulate(A.begin(), A.end(), 0);
    
    // We can find the missing number because we know what the sum of all number in A should be
    int expectedSum = 0;
    for (int i=1; i<=A.size()+1; i++)
    {
        expectedSum +=i;
    }

    return expectedSum - actualSum;
}

/* 
  This exercices is the same as LeetCode challenge named 'MIssingNumber'
  https://github.com/aishsingh/leetcode/tree/main/MissingNumber
*/
