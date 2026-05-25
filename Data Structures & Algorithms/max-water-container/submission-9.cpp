class Solution {
public:
    int maxArea(vector<int>& heights) {
        // Store original indices before sorting
        vector<pair<int,int>> arr; // {height, index}
        for(int i = 0; i < heights.size(); i++) {
            arr.push_back({heights[i], i});
        }

        // Sort by height
        sort(arr.begin(), arr.end());

        int mx = 0;
        int minIndex = arr.back().second;
        int maxIndex = arr.back().second;

        // Traverse from largest height downwards
        for(int i = arr.size() - 1; i >= 0; i--) {
            int h = arr[i].first;
            int idx = arr[i].second;

            // Check distance with farthest indices seen so far
            mx = max(mx, h * abs(idx - minIndex));
            mx = max(mx, h * abs(idx - maxIndex));

            // Update min/max index
            minIndex = min(minIndex, idx);
            maxIndex = max(maxIndex, idx);
        }

        return mx;
    }
};
