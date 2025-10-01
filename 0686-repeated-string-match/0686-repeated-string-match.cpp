class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string repeated = a;
        int count = 1;

        
        while (repeated.size() < b.size()) {
            repeated += a;
            count++;
        }

        int x = 0 ;
        if (repeated.find(b) != string::npos) return count;

        
        repeated += a;
        if (repeated.find(b) != string::npos) return count + 1;

        return -1;
    }
};
