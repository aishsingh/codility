// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    vector<int> solution;

    for (int i=0; i<A.size(); i++)
    {
        int startingIndex = (A.size()-1);

        solution.push_back(A.at(((startingIndex - (K-1)) + i) % (A.size())));
    }

    return solution;
}


/*

[3, 8, 9, 7, 6]

 6, 3, 8, 9, 7
 7, 6, 3, 8, 9
 9, 7, 6, 3, 8

*/
