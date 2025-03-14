class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        
        // Calculate the initial sum of the last 'k' cards
        int current_sum = 0;
        for (int i = n - k; i < n; ++i) {
            current_sum += cardPoints[i];
        }
        
        int max_sum = current_sum;
        
        // Slide the window from the right end to the left end
        for (int i = 0; i < k; ++i) {
            current_sum += cardPoints[i] - cardPoints[n - k + i];
            max_sum = max(max_sum, current_sum);
        }
        
        return max_sum;
    }
};
