class Solution {
  public:
    int cntCoprime(vector<int>& arr) {
        int maxVal = *max_element(arr.begin(), arr.end());
        vector<int> freq(maxVal + 1, 0);
        
        for (int x : arr) freq[x]++;

        vector<int> countDivisible(maxVal + 1, 0);
        for (int i = 1; i <= maxVal; ++i) {
            for (int j = i; j <= maxVal; j += i) {
                countDivisible[i] += freq[j];
            }
        }

        vector<long long> gcdCount(maxVal + 1, 0);
        for (int i = maxVal; i >= 1; --i) {
            long long cnt = countDivisible[i];
            gcdCount[i] = (cnt * (cnt - 1)) / 2;
            for (int j = 2 * i; j <= maxVal; j += i) {
                gcdCount[i] -= gcdCount[j];
            }
        }

        return gcdCount[1];
    }
};
