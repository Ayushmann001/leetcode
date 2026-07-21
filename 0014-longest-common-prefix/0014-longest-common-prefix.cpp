class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s1;
       
       int n=strs.size();
       sort(strs.begin(),strs.end());
       string s=strs[0];
       string e=strs[n-1];

       for(int i=0;i<min(s.size(),e.size());i++){
        if(s[i]!=e[i])
        return s1;

        else{
            s1.push_back(s[i]);
        }
       }
      
        return s1;
    }
};