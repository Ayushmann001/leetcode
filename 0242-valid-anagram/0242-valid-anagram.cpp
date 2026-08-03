class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> m(26,0);
        vector<int> n(26,0);
        if(s.length()!=t.length())
        return false;

        for(int i=0;i<s.length();i++){
           int y=s[i]-'a';
           m[y]++;
        }
        for(int j=0;j<t.length();j++){
           int z=t[j]-'a';
           n[z]++;
        }
        for(int k=0;k<26;k++){
            if(m[k]!=n[k])
            return false;
        }
        return true;
    }
};