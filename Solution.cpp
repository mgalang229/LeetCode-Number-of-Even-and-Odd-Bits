class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> ans(2, 0);
        for (int bit = 0; bit < 32; bit++) {
            if (n & (1 << bit)) {
                ans[bit%2]++;
            }
        }
        return ans;
    }
};
