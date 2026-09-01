class Solution {
public:
    string removeStars(string s) {
        deque<char> st;
        string p;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'){
                st.pop_back();
            }
            else{
                st.push_back(s[i]);
            }
        }
        while(!st.empty()){
            p.push_back(st.front());
            st.pop_front();
        }
        return p;


    }
};