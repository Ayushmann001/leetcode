class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length() > k) {
            string ans;
            int q = 0, sum = 0;

            for(int i = 0; i < s.length(); i++) {
                char a = s[i];
                int num = a - '0';

                sum = sum + num;
                q++;

                if(q == k) {
                    ans += to_string(sum);
                    q = 0;
                    sum = 0;
                }
            }

            if(q > 0) {
                ans += to_string(sum);
            }

            s = ans;
        }

        return s;
    }
};