class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;

        vector<long long> end(26, 0);

        for (char ch : s) {
            int index = ch - 'a';

            long long total = 1; // empty subsequence

            for (int i = 0; i < 26; i++) {
                total = (total + end[i]) % MOD;
            }

            // Replace old subsequences ending with ch
            // to avoid duplicates
            end[index] = total;
        }

        long long ans = 0;

        for (int i = 0; i < 26; i++) {
            ans = (ans + end[i]) % MOD;
        }

        return ans;
    }
};