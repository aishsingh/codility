// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    int sum = 0;
    
    for (unsigned int i=0; i<A.size(); i++) {
        // A xor B xor A = B
        sum ^= A.at(i);
    }
    
    return sum;
}
