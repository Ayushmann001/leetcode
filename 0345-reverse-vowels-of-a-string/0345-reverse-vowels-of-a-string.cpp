class Solution {
public:
    string reverseVowels(string s) {
        stack<char>st;
        string stt="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                st.push(s[i]);
            }
        }
        for(int i=0;i<s.length();i++){
                        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                stt.push_back(st.top());
                st.pop();
            }
            else{
                stt.push_back(s[i]);
            }

        }
        return stt;
    }
};